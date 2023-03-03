#include "main.h"

/**
 * main - Test function for positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i=98;	
	positive_negative(i);
	if(i == 0 && positive_negative(i)=="0 is zero"){return true;}
return (0);
}
