//
// (C) http://cplussplussatplay.blogspot.com/2012/11/text-adventure-games-c-part-1.html
//
#include <iostream>
#include <string>
#include <vector> // For the command handling function.
#include <cctype> // Will be used to eliminate case sensitivity problems.
#include <stdlib.h>
using namespace std;
enum en_DIRS {N, E, S, W};
enum en_ROOMS {BEDROOM, KITCHEN, HALL, MINE};
enum en_VERBS {OPEN, LOOK, GO, GET_UP};
const int NONE = -1;
const int DIRS = 4;
const int ROOMS = 4;
const int VERBS = 4;
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
rms[BEDROOM].description.assign("BEDROOM");
rms[BEDROOM].exits_to_room[N] = NONE;
rms[BEDROOM].exits_to_room[E] = NONE;
rms[BEDROOM].exits_to_room[S] = KITCHEN;
rms[BEDROOM].exits_to_room[W] = NONE;
rms[KITCHEN].description.assign("KITCHEN");
rms[KITCHEN].exits_to_room[N] = BEDROOM;
rms[KITCHEN].exits_to_room[E] = HALL;
rms[KITCHEN].exits_to_room[S] = NONE;
rms[KITCHEN].exits_to_room[W] = NONE;
rms[HALL].description.assign("HALL");
rms[HALL].exits_to_room[N] = NONE;
rms[HALL].exits_to_room[E] = NONE;
rms[HALL].exits_to_room[S] = NONE;
rms[HALL].exits_to_room[W] = KITCHEN;
}
// -------------------------------------------------------------------------------------------------
void set_directions(word *dir)
{
dir[N].code = N;
dir[N].word = "NORTH";
dir[E].code = E;
dir[E].word = "EAST";
dir[S].code = S;
dir[S].word = "SOUTH";
dir[W].code = W;
dir[W].word = "WEST";
}
// -------------------------------------------------------------------------------------------------
void set_verbs(word *vbs)
{
// enum en_VERBS {OPEN, LOOK, GO, GET_UP};
vbs[OPEN].code = OPEN;
vbs[OPEN].word = "OPEN";
vbs[GO].code = GO;
vbs[GO].word = "GO";
vbs[LOOK].code = LOOK;
vbs[LOOK].word = "LOOK";
vbs[GET_UP].code = GET_UP;
vbs[GET_UP].word = "GET_UP";
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
if (loc == BEDROOM && wd1 == dir[E].word) {
loc = rand() % 5;
cout << "I am now in a " << rms[loc].description << "." << endl;
return true;
}
if(loc == HALL && wd1 == dir[E].word){
cout << "Sorry, you have died. There was mine under the doormat. Would you like play again?";
}
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
if(loc == HALL && wd1 == dir[E].word){
cout << "?" << endl;
}
else{
cout << "No exit that way." << endl;
}
return true;
}
}
}
// Handle verbs. As a reference, here are the verbs I am using in the game.
// enum en_VERBS {OPEN, LOOK, GO, GET_UP};
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
cout << ">>";
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



