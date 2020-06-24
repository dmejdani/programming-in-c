#include <stdio.h>

int start01end10(unsigned char x)
{

	if ((x >> 6  & 1) && (x << 6 & 128))
	{
		printf("%c starts 01 and ends 10\n", x);
		return 1;
	}

	else 
	{
		printf("%c does not start 01 and end 10\n", x);
		return 0;
	}
}


int main()
{
	unsigned char x;
	scanf(" %c", &x);
	printf("%c\n", x);

	while (x != 'x')
	{
		printf("The decimal representation is %d\n", x);
		start01end10(x);
		scanf(" %c", &x);
		printf("%c\n", x);
	}

	return 0;
}
