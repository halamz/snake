#pragma once
#include <iostream>
using namespace std;

class snake
{
private:
	int r, c;
public:
	snake(int , int);
	void print();
	int move();
	~snake();
};

