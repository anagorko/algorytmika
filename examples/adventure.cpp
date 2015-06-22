//
// (C) http://cplussplussatplay.blogspot.com/2012/11/text-adventure-games-c-part-1.html
//

#include <iostream>
#include <string>
#include <vector>  // For the command handling function.
#include <cctype>  // Will be used to eliminate case sensitivity problems.

using namespace std;

enum en_DIRS {NORTH, EAST, SOUTH, WEST};
enum en_ROOMS {SPORTSHOP, CASINO, CARPARK, LOBBY, RESTAURANT, CORRIDOR, STOREROOM, POOL, GARDEN, POND, PUMPROOM};
enum en_VERBS {GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};

const int NONE = -1;
const int DIRS = 4;
const int ROOMS = 11;
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
    rms[SPORTSHOP].description.assign("sports shop");
    rms[SPORTSHOP].exits_to_room[NORTH] = NONE;
    rms[SPORTSHOP].exits_to_room[EAST] = NONE;
    rms[SPORTSHOP].exits_to_room[SOUTH] = CARPARK;
    rms[SPORTSHOP].exits_to_room[WEST] = NONE;

    rms[CASINO].description.assign("bustling casino");
    rms[CASINO].exits_to_room[NORTH] = NONE;
    rms[CASINO].exits_to_room[EAST] = NONE;
    rms[CASINO].exits_to_room[SOUTH] = LOBBY;
    rms[CASINO].exits_to_room[WEST] = NONE;

    rms[CARPARK].description.assign("car park");
    rms[CARPARK].exits_to_room[NORTH] = SPORTSHOP;
    rms[CARPARK].exits_to_room[EAST] = LOBBY;
    rms[CARPARK].exits_to_room[SOUTH] = NONE;
    rms[CARPARK].exits_to_room[WEST] = NONE;

    rms[LOBBY].description.assign("hotel lobby");
    rms[LOBBY].exits_to_room[NORTH] = CASINO;
    rms[LOBBY].exits_to_room[EAST] = RESTAURANT;
    rms[LOBBY].exits_to_room[SOUTH] = CORRIDOR;
    rms[LOBBY].exits_to_room[WEST] = CARPARK;

    rms[RESTAURANT].description.assign("restaurant");
    rms[RESTAURANT].exits_to_room[NORTH] = NONE;
    rms[RESTAURANT].exits_to_room[EAST] = NONE;
    rms[RESTAURANT].exits_to_room[SOUTH] = NONE;
    rms[RESTAURANT].exits_to_room[WEST] = LOBBY;

    rms[CORRIDOR].description.assign("corridor");
    rms[CORRIDOR].exits_to_room[NORTH] = LOBBY;
    rms[CORRIDOR].exits_to_room[EAST] = STOREROOM;
    rms[CORRIDOR].exits_to_room[SOUTH] = GARDEN;
    rms[CORRIDOR].exits_to_room[WEST] = NONE;

    rms[STOREROOM].description.assign("store room");
    rms[STOREROOM].exits_to_room[NORTH] = NONE;
    rms[STOREROOM].exits_to_room[EAST] = NONE;
    rms[STOREROOM].exits_to_room[SOUTH] = NONE;
    rms[STOREROOM].exits_to_room[WEST] = CORRIDOR;

    rms[POOL].description.assign("swimming pool area");
    rms[POOL].exits_to_room[NORTH] = NONE;
    rms[POOL].exits_to_room[EAST] = GARDEN;
    rms[POOL].exits_to_room[SOUTH] = PUMPROOM;
    rms[POOL].exits_to_room[WEST] = NONE;

    rms[GARDEN].description.assign("tranquil garden");
    rms[GARDEN].exits_to_room[NORTH] = CORRIDOR;
    rms[GARDEN].exits_to_room[EAST] = POND;
    rms[GARDEN].exits_to_room[SOUTH] = NONE;
    rms[GARDEN].exits_to_room[WEST] = POOL;

    rms[POND].description.assign("patio with a fish pond");
    rms[POND].exits_to_room[NORTH] = NONE;
    rms[POND].exits_to_room[EAST] = NONE;
    rms[POND].exits_to_room[SOUTH] = NONE;
    rms[POND].exits_to_room[WEST] = GARDEN;

    rms[PUMPROOM].description.assign("damp pump room");
    rms[PUMPROOM].exits_to_room[NORTH] = POOL;
    rms[PUMPROOM].exits_to_room[EAST] = NONE;
    rms[PUMPROOM].exits_to_room[SOUTH] = NONE;
    rms[PUMPROOM].exits_to_room[WEST] = NONE;
}

// -------------------------------------------------------------------------------------------------

void set_directions(word *dir)
{
    dir[NORTH].code = NORTH;
    dir[NORTH].word = "NORTH";
    dir[EAST].code = EAST;
    dir[EAST].word = "EAST";
    dir[SOUTH].code = SOUTH;
    dir[SOUTH].word = "SOUTH";
    dir[WEST].code = WEST;
    dir[WEST].word = "WEST";
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

    int location = CARPARK; // using the enumerated type identifier, of course.

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