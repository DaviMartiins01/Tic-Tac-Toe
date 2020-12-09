#include <stdlib.h>
#include <stdio.h>

void Draw(void);
void PrintValue();
void GetAnswer();
void CheckAnswer();

char coordinates[3][3];

int turn = 1;
int collum;
int line;
int loop = 0;

int main()
{
    do
    {
        PrintValue();
        Draw();
        GetAnswer();
        CheckAnswer();
        system("cls");

    }while(loop == 0);


    if(turn == 1)
      turn = 2;
    else
      turn = 1;

    Draw();
    printf("\n\t   Player %i Won!!!", turn);
    printf("\n\tThank you for playing!\n");
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

        if(coordinates[line][collum] != 'O' && line < 3 && collum < 3 && coordinates[line][collum] != 'X')
        {
            coordinates[line][collum] = 'X';
            turn = 2;
        }
    }
    else
    {
        printf("\nType the line \n>>> ");
        scanf("%i", &line);

        printf("Type the collum \n>>> ");
        scanf("%i", &collum);

        if(coordinates[line][collum] != 'X' && line < 3 && collum < 3 && coordinates[line][collum] != 'O')
        {
            coordinates[line][collum] = 'O';
            turn = 1;
        }
    }
}

void CheckAnswer()
{
     for(int i = 0; i < 3; i++)
     {
          if(coordinates[0+i][0] == 'X' && coordinates[0+i][1] == 'X' && coordinates[0+i][2] == 'X' || coordinates[0+i][0] == 'O' && coordinates[0+i][1] == 'O' && coordinates[0+i][2] == 'O')
          {
              loop = 1;
          }

          if(coordinates[0][0+i] == 'X' && coordinates[1][0+i] == 'X' && coordinates[2][0+i] == 'X' || coordinates[0][0+i] == 'O' && coordinates[1][0+i] == 'O' && coordinates[2][0+i] == 'O')
          {
              loop = 1;
          }

          if(coordinates[0][0] == 'X' && coordinates[1][1] == 'X' && coordinates[2][2] == 'X' || coordinates[0][0] == 'O' && coordinates[1][1] == 'O' && coordinates[2][2] == 'O')
          {
              loop = 1;
              break;
          }

          if(coordinates[2][0] == 'X' && coordinates[1][1] == 'X' && coordinates[0][2] == 'X' || coordinates[2][0] == 'O' && coordinates[1][1] == 'O' && coordinates[0][2] == 'O')
          {
              loop = 1;
              break;
          }
     }
}
