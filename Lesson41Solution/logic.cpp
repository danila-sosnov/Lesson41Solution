#include "util.h"

double calc_avg_mark(int* marks, int size)
{
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += marks[i];
	}

	avg = avg / size;

	return avg;
}

string find_best_class(double a, double b, double c)
{
	return a > b && a > c ? "A" : (b > c ? "B" : "C");
}