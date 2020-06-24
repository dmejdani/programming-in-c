/*
	JTSK-320111
	a1 p1.c
	Desar Mejdani
	d.mejdani@jacobs-university.de
*/

#include <stdio.h>

int main()
{
	double result; /* The result of our calculation */
	result = (3. + 1) / 5;
	/* Since 3, 1 and 5 are integer values, the computer takes them as int data type. Thus, we should specify that they are float data type, in order to get the the float data type integer as an output. This is done by adding the '.' in one of them.*/
	printf("The value of 4/5 is %lf\n", result);
	return 0;
}
