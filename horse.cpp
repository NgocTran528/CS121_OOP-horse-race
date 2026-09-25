#include <iostream>
#include <cstdlib>
#include "horse.h"

Horse::Horse(){
	position = 0;
	index = 0;
	trackLength = 15;
} // end Horse


void Horse::init(int idx, int len){
	index = idx;
	trackLength = len;
	position = 0;
} // end init


void Horse::advance(){
	int coin = rand() % 2;
	position = position + coin;
} // end advance


void Horse::printLane(){
	for (int pos = 0; pos < trackLength; pos++){
		if (position == pos){
			std::cout << index;
		} else {
			std::cout << ".";
		} // end if
	} // end for
	std::cout << std::endl;
} // end printLane


bool Horse::isWinner(){
	bool winning = false;
	if (position >= trackLength){
		winning = true;
		std::cout << "Horse " << index << " WINS!!!" << std::endl;
	} // end if
	return winning;
} // end isWinner
