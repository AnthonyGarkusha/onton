#include <iostream>
#include "cycle.h"
#include "rectangel.h"

using namespace std;

//bool check(cycle cyc, rectangel rec)
//{
//	if (cyc.getColor == rec.getColor)
//	{
//		return true;
//	}
//	return false;
//}


int main() {
	rectangel rec;
	cycle cyc;
	if (cyc.check(cyc, rec))
	{
		cout << "Da";
	}
	else
	{
		cout << "net";
	}
	return 0;
}


