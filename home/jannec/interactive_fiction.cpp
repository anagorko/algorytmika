#include <iostream>
#include <string>
#include <vector>  // For the command handling function.
#include <cctype>  // Will be used to eliminate case sensitivity problems.
 
using namespace std;
 
enum en_DIRS {NORTH, EAST, SOUTH, WEST};
enum en_ROOM {BEDROOM, LIVINGROOM, KITCHEN, GARDEN}; 
enum en_VERBS {GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};
 
const int NONE = -1;
const int DIRS = 4;
const int ROOMS = 4;
const int VERBS = 8;
 
struct word
{
    string word;
    int code;
};
 
struct room
{
    string des; // description
    int ex[DIRS]; // exits to room
};
 
// -------------------------------------------------------------------------------------------------
 
void set_rooms(room *rms)
{

    rms[BEDROOM].des.assign("bedroom");
    rms[BEDROOM].ex[NORTH] = NONE;
    rms[BEDROOM].ex[EAST] = NONE;
    rms[BEDROOM].ex[SOUTH] = NONE;
    rms[BEDROOM].ex[WEST] = LIVINGROOM;
 
    rms[LIVINGROOM].des.assign("living room");
    rms[LIVINGROOM].ex[NORTH] = NONE;
    rms[LIVINGROOM].ex[EAST] = BEDROOM;
    rms[LIVINGROOM].ex[SOUTH] = GARDEN;
    rms[LIVINGROOM].ex[WEST] = KITCHEN;
 
    rms[KITCHEN].des.assign("kitchem");
    rms[KITCHEN].ex[NORTH] = NONE;
    rms[KITCHEN].ex[EAST] = LIVINGROOM;
    rms[KITCHEN].ex[SOUTH] = NONE;
    rms[KITCHEN].ex[WEST] = NONE;
 
    rms[GARDEN].des.assign("dwarf Modo's garden");
    rms[GARDEN].ex[NORTH] = LIVINGROOM;
    rms[GARDEN].ex[EAST] = NONE;
    rms[GARDEN].ex[SOUTH] = NONE;
    rms[GARDEN].ex[WEST] = NONE;
 
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
    cout << "I am in a " << rms[loc].des << "." << endl;
   
    // LOOK should also allow the player to see what exits exist from the current room.
    for(i = 0; i < DIRS; i++)
    {
        if(rms[loc].ex[i] != NONE)
        {
            cout << "There is an exit " << dir[i].word << " to a " << rms[rms[loc].ex[i]].des << "." << endl;
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
            if(rms[loc].ex[dir[i].code] != NONE)
            {
                loc = rms[loc].ex[dir[i].code];
                cout << "I am now in a " << rms[loc].des << "." << endl;
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
 
    int location = BEDROOM; // using the enumerated type identifier, of course.
 
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
