#include <stdlib.h>
#include <stdio.h>

void Draw(void);

char coordinates[3][3];

int main()
{
    coordinates[0][0] = ' ';
    coordinates[0][1] = ' ';
    coordinates[0][2] = ' ';
    coordinates[1][0] = ' ';
    coordinates[1][1] = ' ';
    coordinates[1][2] = ' ';
    coordinates[2][0] = ' ';
    coordinates[2][1] = ' ';
    coordinates[2][2] = ' ';
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
