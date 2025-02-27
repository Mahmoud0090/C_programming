#include <stdio.h>

/* convert an integer into a string of 1s and 0s */
char *binString(unsigned short n)
{
	static char bin[17];
	int x;

	for(x=0;x<16;x++)
	{
		bin[x] = n & 0x8000 ? '1' : '0';
		n <<= 1;
	}
	bin[16] = '\0';

	return(bin);
}

int main()
{
	unsigned short a;
	int x;

	a = 0x0003;

	for(x=0;x<16;x++)
	{
		printf("%04X - %s\n",a,binString(a));
		a = a << 1;
	}

    puts("----------------------------");

    int b = 1;

	while(b < 33000)
	{
		printf("%d\n",b);
		b = b << 1;
	}

    puts("-----------------------");

    int c = 1000000;

	while(c > 0)
	{
		printf("%d\n",c);
		c = c >> 1;
	}

	return(0);
}
