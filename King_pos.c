#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*How many turns would it take for the king to
wander off the chess board*/

#define Gsize 8

struct loc{
    int row;
    int col;
};

/*output the game grid*/
void output(int t , struct loc k)
{
    int row,col;
    /*grid header*/
    if(t==0)
        puts("start");
    else
        printf("Turn %d :\n" , t);

    /*grid*/
    for(row=0;row<Gsize;row++)
    {
        for(col=0;col<Gsize;col++)
        {
            if(row==k.row && col==k.col)
                printf(" K ");
            else
                printf(" . ");
        }
        putchar('\n');
    }
}

/*move negative , positive or zero*/
int move(void)
{
    int r;

    r = (rand() % 3) - 1;
    return (r);
}
/*check to see if king's location is save*/
int escaped(struct loc k)
{
    enum {FALSE , TRUE};

    if(k.row<0)
        return (TRUE);
    if(k.row>=Gsize)
        return (TRUE);
    if(k.col<0)
        return (TRUE);
    if(k.col>=Gsize)
        return (TRUE);
    
    return FALSE;
}

int main(void)
{
    int turn = 0;
    struct loc king = { 3 , 4 }; /*fourth row , fifth column*/

    /*seed randomizer*/
    srand( (unsigned)time(NULL) );

    /*the loop terminate when the king wanders out*/
    while(1)
    {
        /*show the grid*/
        output(turn , king);
        /*move the king*/
        king.row += move();
        king.col += move();

        /*check new position*/
        if( escaped(king) )
            break;
        turn++;
    }

    printf("The king wandered off the grid after %d turns\n",turn);

	return(0);
}