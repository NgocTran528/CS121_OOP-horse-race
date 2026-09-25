#ifndef HORSE_H
#define HORSE_H

class Horse {
	private:
		int position;
		int index;
		int trackLength;
	public:
		Horse();
		void init (int idx, int len);
		void advance();
		void printLane();
		bool isWinner();
};
#endif
