#include "util.h"

void init(int* marks, int size, int min_mark, int max_mark)
{
	for (int i = 0; i < size; i++)
	{
		marks[i] = rand() % (max_mark - min_mark + 1) + min_mark;
	}
}

string convert(int* marks, int size)
{
	string s = " ";
	for (int i = 0; i < size; i++)
	{
		s =  to_string(marks[i]) + " ";
	}

	return s;
}