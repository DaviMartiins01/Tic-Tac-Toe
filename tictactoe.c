#include <stdlib.h>
#include <stdio.h>

void Draw(void);
void PrintValue();
void GetAnswer();

char coordinates[3][3];

int turn = 1;
int collum;
int line;

int main()
{
    do
    {
        PrintValue();
        Draw();
        GetAnswer();
        system("cls");

    }while(turn == turn);

    return 0;
}

void Draw(void)
{
    printf("       |       |            Player %i\n", turn);
    printf("   %c   |   %c   |   %c   \n", coordinates[0][0], coordinates[0][1], coordinates[0][2]);
    printf("_______|_______|_______\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n", coordinates[1][0], coordinates[1][1], coordinates[1][2]);
    printf("_______|_______|_______\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n", coordinates[2][0], coordinates[2][1], coordinates[2][2]);
    printf("       |       |       \n");
}

void PrintValue()
{
    for(int i = 0; i < 3; i++)
    {
         for(int e = 0; e < 3; e++)
         {
            if(coordinates[i][e] != 'X' && coordinates[i][e] != 'O')
            {
                coordinates[i][e] = ' ';
            }
         }
    }
}

void GetAnswer()
{
    if(turn == 1)
    {
        printf("\nType the line\n>>> ");
        scanf("%i", &line);

        printf("Type the collum \n>>> ");
        scanf("%i", &collum);

        coordinates[line][collum] = 'X';
        turn = 2;
    }
    else
    {
        printf("\nType the line \n>>> ");
        scanf("%i", &line);

        printf("Type the collum \n>>> ");
        scanf("%i", &collum);

        coordinates[line][collum] = 'O';
        turn = 1;
    }

}
