#include <stdio.h>

struct printjob
{
	int ID;
	char options;
};
int check_g(struct printjob job)
{

	if ((job.options & (1 << 7)) == (1 << 7))
		return 1;

	else 
		return 0;
}
int check_2S(struct printjob job)
{
	if ((job.options & (1 << 0)) == (1 << 0))
		return 1;
	else
		return 0;
}
void printbincharpad(char c)
{
    for (int i = 7; i >= 0; --i)
    {
        putchar( (c & (1 << i)) ? '1' : '0' );
    }
    putchar('\n');
}

int main()
{	struct printjob job;
	job.ID = 1;
	job.options = 0;
	// Gray Color  OneS Stapled P1  P2 P3 TwoS
	//   0    1     0     1     0   1  0   1
	// setting Color
	job.options |= (1 << 6);
	// setting Two-sided
	job.options |= (1 << 0);
	// setting Stapled
	job.options |= (1 << 4);
	// setting Printer2
	job.options |= (1 << 2);
	if (check_g(job))
		printf("The option Grayscale is active\n");
	else
		printf("The option Grayscale is not active\n");
	return 0;}