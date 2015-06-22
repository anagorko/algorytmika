#include<iostream>
using namespace std;

enum en_DIRS {NORTH, WEST, SOUTH, EAST}
enum en_ROOMS {SYPIALNIA, KUCHNIA, SALON, OGROD}
enum en_VERBS



const int NONE = -1
const int DIRS = 4;
const int ROOMS = 4;
const int VERBS



//----------------------------------------------------------------------------------------

void set_rooms(room *rms){

	rms[SYPIALNIA].description.assign("sypialnia krolewska");
	rms[SYPIALNIA].exits_to_room[NORTH] = NONE;
	rms[SYPIALNIA].exits_to_room[WEST] = SALON;
	rms[SYPIALNIA].exits_to_room[SOUTH] = NONE; 
	rms[SYPIALNIA].exits_to_room[EAST] = NONE;
	
	
	rms[KUCHNIA].description.assign("kuchnia starego Godfryda");
	rms[KUCHNIA].exits_to_room[NORTH] = NONE;
	rms[KUCHNIA].exits_to_room[WEST] = NONE;
	rms[KUCHNIA].exits_to_room[SOUTH] = NONE; 
	rms[KUCHNIA].exits_to_room[EAST] = SALON;
	
	
	rms[SALON].description.assign("salon do przyjmowania gosci i lezenia bykiem");
	rms[SALON].exits_to_room[NORTH] = NONE;
	rms[SALON].exits_to_room[WEST] = KUCHNIA;
	rms[SALON].exits_to_room[SOUTH] = OGROD; 
	rms[SALON].exits_to_room[EAST] = SYPIALNIA;
	
	
	rms[OGROD].description.assign("przepiekny ogrod krasnoluda Modo");
	rms[OGROD].exits_to_room[NORTH] = NONE;
	rms[OGROD].exits_to_room[WEST] = NONE;
	rms[OGROD].exits_to_room[SOUTH] = SALON; 
	rms[OGROD].exits_to_room[EAST] = NONE;




}





int main{


return 0;
}