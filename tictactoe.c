#include <stdlib.h>
#include <stdio.h>

void Draw(void);
void PrintValue();

char coordinates[3][3];

int main()
{
    PrintValue();
    Draw();
    return 0;
}

void Draw(void)
{
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n", coordinates[0][0], coordinates[0][1], coordinates[0][2]);
    printf("_______|_______|_______\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n", coordinates[1][0], coordinates[1][1], coordinates[1][2]);
    printf("_______|_______|_______\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n", coordinates[2][1], coordinates[2][1], coordinates[2][2]);
    printf("       |       |       \n");
}

void PrintValue()
{
    for(int i = 0; i < 3; i++)
    {
       for(int e = 0; e < 3; e++)
       {
          coordinates[i][e] = ' ';
       }
    }
}
