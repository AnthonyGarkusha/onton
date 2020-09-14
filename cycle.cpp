#include "cycle.h"

cycle::cycle()
{
	color = 3;
	a = 7;
	b = 6;
	cout << "aaaa cyc\n\n";
}

int cycle::getColor()
{
	return color;
}

bool cycle::check(cycle cyc, rectangel& rec)
{
	if (cyc.getColor == rec.getColor)
	{
		return true;
	}
	return false;
}