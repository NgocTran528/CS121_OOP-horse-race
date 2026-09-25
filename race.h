#ifndef RACE_H
#define RACE_H
#include "horse.h"

class Race {
	private:
		const static int NUM_HORSES = 5;
		const int TRACK_LENGTH = 15;
		Horse horses[NUM_HORSES];
	public:
		Race();
		void start();
};
#endif
