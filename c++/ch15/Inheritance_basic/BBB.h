#ifndef BBB_H
#define BBB_H
#include "AAA.h"

class BBB : public AAA {
private:
	int d;
	char name[20];
public:
	BBB();
	BBB(int _d, const char* _name);
	~BBB();
	void Print();
};
#endif