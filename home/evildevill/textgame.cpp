//
// (C) http://cplussplussatplay.blogspot.com/2012/11/text-adventure-games-c-part-1.html
//

#include <iostream>
#include <string>
#include <vector>  // For the command handling function.
#include <cctype>  // Will be used to eliminate case sensitivity problems.

using namespace std;

enum en_DIRS {N, NE, E, S, SE, W, NW, SW};
enum en_ROOMS {SALON, ŁAZIENKA, KUCHNIA, GABINET, OGRÓD, SCHOWEK};
enum en_VERBS {GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};

const int NONE = -1;
const int DIRS = 8;
const int ROOMS = 6;
const int VERBS = 8;

struct word
{
    string word;
    int code;
};

struct room
{
    string description;
    int exits_to_room[DIRS];
};

// -------------------------------------------------------------------------------------------------

void set_rooms(room *rms)
{
    rms[SALON].description.assign("SALON");
    rms[SALON].exits_to_room[N] = ŁAZIENKA;
    rms[SALON].exits_to_room[NE] = NONE;
    rms[SALON].exits_to_room[E] = KUCHNIA;
    rms[SALON].exits_to_room[S] = GABINET;
    rms[SALON].exits_to_room[SE] = NONE;
    rms[SALON].exits_to_room[W] = OGRÓD;
    rms[SALON].exits_to_room[NW] = NONE;
    rms[SALON].exits_to_room[SW] = NONE;

    rms[ŁAZIENKA].description.assign("ŁAZIENKA");
    rms[ŁAZIENKA].exits_to_room[N] = NONE;
    rms[ŁAZIENKA].exits_to_room[NE] = NONE;
    rms[ŁAZIENKA].exits_to_room[E] = NONE;
    rms[ŁAZIENKA].exits_to_room[S] = SALON;
    rms[ŁAZIENKA].exits_to_room[SE] = KUCHNIA;
    rms[ŁAZIENKA].exits_to_room[W] = NONE;
    rms[ŁAZIENKA].exits_to_room[NW] = NONE;
    rms[ŁAZIENKA].exits_to_room[SW] = OGRÓD;

    rms[KUCHNIA].description.assign("KUCHNIA");
    rms[KUCHNIA].exits_to_room[N] = NONE;
    rms[KUCHNIA].exits_to_room[NE] = NONE;
    rms[KUCHNIA].exits_to_room[E] = NONE;
    rms[KUCHNIA].exits_to_room[S] = NONE;
    rms[KUCHNIA].exits_to_room[SE] = NONE;
    rms[KUCHNIA].exits_to_room[W] = SALON;
    rms[KUCHNIA].exits_to_room[NW] = ŁAZIENKA;
    rms[KUCHNIA].exits_to_room[SW] = GABINET;

    rms[GABINET].description.assign("GABINET");
    rms[GABINET].exits_to_room[N] = SALON;
    rms[GABINET].exits_to_room[NE] = KUCHNIA;
    rms[GABINET].exits_to_room[E] = NONE;
    rms[GABINET].exits_to_room[S] = SCHOWEK;
    rms[GABINET].exits_to_room[SE] = NONE;
    rms[GABINET].exits_to_room[W] = NONE;
    rms[GABINET].exits_to_room[NW] = OGRÓD;
    rms[GABINET].exits_to_room[SW] = NONE;

    rms[OGRÓD].description.assign("OGRÓD");
    rms[OGRÓD].exits_to_room[N] = NONE;
    rms[OGRÓD].exits_to_room[NE] = ŁAZIENKA;
    rms[OGRÓD].exits_to_room[E] = SALON;
    rms[OGRÓD].exits_to_room[S] = NONE;
    rms[OGRÓD].exits_to_room[SE] = GABINET;
    rms[OGRÓD].exits_to_room[W] = NONE;
    rms[OGRÓD].exits_to_room[NW] = NONE;
    rms[OGRÓD].exits_to_room[SW] = NONE;

    rms[SCHOWEK].description.assign("SCHOWEK");
    rms[SCHOWEK].exits_to_room[N] = NONE;
    rms[SCHOWEK].exits_to_room[NE] = NONE;
    rms[SCHOWEK].exits_to_room[E] = SALON;
    rms[SCHOWEK].exits_to_room[S] = NONE;
    rms[SCHOWEK].exits_to_room[SE] = NONE;
    rms[SCHOWEK].exits_to_room[W] = OGRÓD;
    rms[SCHOWEK].exits_to_room[NW] = NONE;
    rms[SCHOWEK].exits_to_room[SW] = NONE;


}

// -------------------------------------------------------------------------------------------------

void set_directions(word *dir)
{
    dir[NORTH].code = N;
    dir[NORTH].word = "PÓŁNOC";

    dir[NORTH].code = NE;
    dir[NORTH].word = "PÓŁNOCNY WSCHÓD";

    dir[NORTH].code = E;
    dir[NORTH].word = "WSCHÓD";

    dir[NORTH].code = S;
    dir[NORTH].word = "POŁUDNIE";

    dir[NORTH].code = SE;
    dir[NORTH].word = "POŁUDNIOWY WSCHÓD";

    dir[NORTH].code = W;
    dir[NORTH].word = "ZACHÓD";

    dir[NORTH].code = NW;
    dir[NORTH].word = "PÓŁNOCNY ZACHÓD";

    dir[NORTH].code = SW;
    dir[NORTH].word = "POŁUDNIOWY ZACHÓD";

}

// -------------------------------------------------------------------------------------------------

void set_verbs(word *vbs)
{
    // enum en_VERBS {GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};
    vbs[GET].code = GET;
    vbs[GET].word = "GET";
    vbs[DROP].code = DROP;
    vbs[DROP].word = "DROP";
    vbs[USE].code = USE;
    vbs[USE].word = "USE";
    vbs[OPEN].code = OPEN;
    vbs[OPEN].word = "OPEN";
    vbs[CLOSE].code = CLOSE;
    vbs[CLOSE].word = "CLOSE";
    vbs[EXAMINE].code = EXAMINE;
    vbs[EXAMINE].word = "EXAMINE";
    vbs[INVENTORY].code = INVENTORY;
    vbs[INVENTORY].word = "INVENTORY";
    vbs[LOOK].code = LOOK;
    vbs[LOOK].word = "LOOK";
}

// -------------------------------------------------------------------------------------------------

void section_command(string Cmd, string &wd1, string &wd2)
{
    string sub_str;
    vector<string> words;
    char search = ' ';
    size_t i, j;

    // Split Command into vector
    for(i = 0; i < Cmd.size(); i++)
    {
        if(Cmd.at(i) != search)
        {
            sub_str.insert(sub_str.end(), Cmd.at(i));
        }
        if(i == Cmd.size() - 1)
        {
            words.push_back(sub_str);
            sub_str.clear();
        }
        if(Cmd.at(i) == search)
        {
            words.push_back(sub_str);
            sub_str.clear();
        }
    }
    // Clear out any blanks
    // I work backwards through the vectors here as a cheat not to invaldate the iterator
    for(i = words.size() - 1; i > 0; i--)
    {
        if(words.at(i) == "")
        {
            words.erase(words.begin() + i);
        }
    }
    // Make words upper case
    // Right here is where the functions from cctype are used
    for(i = 0; i < words.size(); i++)
    {
        for(j = 0; j < words.at(i).size(); j++)
        {
            if(islower(words.at(i).at(j)))
            {
                words.at(i).at(j) = toupper(words.at(i).at(j));
            }
        }
    }
    // Very simple. For the moment I only want the first to words at most (verb / noun).
    if(words.size() == 0)
    {
        cout << "No command given" << endl;
    }
    if(words.size() == 1)
    {
        wd1 = words.at(0);
    }
    if(words.size() == 2)
    {
        wd1 = words.at(0);
        wd2 = words.at(1);
    }
    if(words.size() > 2)
    {
        cout << "Command too long. Only type one or two words (direction or verb and noun)" << endl;
    }
}

// ----------------------------------------------------------------------------------------
void look_around(int loc, room *rms, word *dir)
{
    int i;
    cout << "I am in a " << rms[loc].description << "." << endl;
    
    // LOOK should also allow the player to see what exits exist from the current room.
    for(i = 0; i < DIRS; i++)
    {
        if(rms[loc].exits_to_room[i] != NONE)
        {
            cout << "There is an exit " << dir[i].word << " to a " << rms[rms[loc].exits_to_room[i]].description << "." << endl;
        }
    }
}

// ----------------------------------------------------------------------------------------

bool parser(int &loc, string wd1, string wd2, word *dir, word *vbs, room *rms)
{
    int i;
    for(i = 0; i < DIRS; i++)
    {
        if(wd1 == dir[i].word)
        {
            if(rms[loc].exits_to_room[dir[i].code] != NONE)
            {
                loc = rms[loc].exits_to_room[dir[i].code];
                cout << "I am now in a " << rms[loc].description << "." << endl;
                return true;
            }
            else
            {
                cout << "No exit that way." << endl;
                return true;
            }
        }
    }

    // Handle verbs. As a reference, here are the verbs I am using in the game.
    // enum en_VERBS {GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};
    int VERB_ACTION = NONE;
    
    for(i = 0; i < VERBS; i++)
    {
        if(wd1 == vbs[i].word)
        {
            VERB_ACTION = vbs[i].code;
            break;
        }
    }
    
    if(VERB_ACTION == LOOK)
    {
        // This is an example of sub proceduralizing a function from the parser.
        look_around(loc, rms, dir);
        return true;
    }

    if(VERB_ACTION == NONE)
    {
        cout << "No valid command entered." << endl;
        return true;
    }
    return false;
}

// ----------------------------------------------------------------------------------------



// ----------------------------------------------------------------------------------------

int main()
{
    string command;
    string word_1;
    string word_2;

    room rooms[ROOMS];
    set_rooms(rooms);

    word directions[DIRS];
    set_directions(directions);

    word verbs[VERBS];
    set_verbs(verbs);

    int location = SALON; // using the enumerated type identifier, of course.

    while(word_1 != "QUIT")
    {
        command.clear();
        cout << "What shall I do? ";
        getline(cin, command);
        //cout << "Your raw command was " << command << endl;

        word_1.clear();
        word_2.clear();

        // Call the function that handles the command line format.
        section_command(command, word_1, word_2);

        // Call the parser.
        if(word_1 != "QUIT")
        {
            parser(location, word_1, word_2, directions, verbs, rooms);
        }
    }
    return 0;
}
