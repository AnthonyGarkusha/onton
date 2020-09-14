#include <iostream>
#include "rectangel.h"

using namespace std;
class cycle
{
private:
	double a, b;
	int color;
public:
	friend class rectangle;
	bool check(cycle cyc, rectangel& rec);
	cycle();
	int getColor();

};