#include "snake.h"


snake::snake(int i, int j) : r(i), c(j)
{
}

void snake::print()
{
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (i == r && j == c)
			{
				cout << "--" << endl;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
snake::~snake()
{
}
