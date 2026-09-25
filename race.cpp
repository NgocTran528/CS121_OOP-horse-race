#include <iostream>
#include <cstdlib>
#include <ctime>
#include "race.h"

Race::Race(){
	for (int i = 0; i< NUM_HORSES; i++){
		horses[i].init(i, TRACK_LENGTH);
	} // end for
} // end Race

void Race::start(){
	srand(time(NULL));
	bool keepGoing = true;
	while (keepGoing){
		for (int i = 0; i < NUM_HORSES; i++){
			horses[i].advance();
			horses[i].printLane();
			if (horses[i].isWinner() == true){
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press enter for another turn" << std::endl;
		std::cin.get();
	} // end while
} // end start
