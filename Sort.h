#pragma once
#include <iostream>
using namespace std;
class Sort
{
public:
	Sort();
	Sort(int *vie, int *mana);
	virtual ~Sort();
	virtual void lancerSort();
	virtual void quelSort();
protected:
	int *pointeurVie= 0;
	int *pointeurMana = 0;
};

