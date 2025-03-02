#include <stdio.h>

struct pixel
{
    int vertical;
    int horizontal;
    char color;
};

int main()
{
    struct pixel box[4] = {
		{ 100,  50, 'r' },
		{ 200,  50, 'r' },
		{ 100, 100, 'r' },
		{ 200, 100, 'r' }
	};

    int x;

    //we can this also

    /* struct pixel {
		int horz;
		int vert;
		char color;
	} box[4] = {
		{ 100,  50, 'r' },
		{ 200,  50, 'r' },
		{ 100, 100, 'r' },
		{ 200, 100, 'r' }
	}; */

	for(x=0;x<4;x++)
	{
		printf("Pixel %d: %d, %d =  %c\n",
            x+1,
            box[x].vertical,
            box[x].horizontal,
            box[x].color
		);
	}

    return 0;
}