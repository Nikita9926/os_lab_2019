#include "swap.h"

void Swap(char *left, char *right)
{
	char cont = *left;
    *left = *right;
    *right = cont;
}
