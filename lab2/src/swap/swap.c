#include "swap.h"

void Swap(char * const left, char * const right)
{
	// ваш код здесь
	char temp = * left;
	*left = *right;
	*right = temp;
}
