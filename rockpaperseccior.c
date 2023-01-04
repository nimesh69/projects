#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    if ((c1 == 'r' && c2 == 's'))
    {
        return 1;
    }
    if ((c1 == 'p' && c2 == 'r'))
    {
        return 1;
    }
    if ((c1 == 's' && c2 == 'p'))
    {
        return 1;
    }
    if ((c1 == 'r' && c2 == 'p'))
    {
        return 0;
    }
    if ((c1 == 'p' && c2 == 's'))
    {
        return 0;
    }
    if ((c1 == 's' && c2 == 'r'))
    {
        return 0;
    }
}
int main()
{
    system("cls");
    int temp, c1 = 0, p1 = 0, c,r;
    char playerchar, compchar;
    char alpha[] = {'r', 'p', 's'};
    printf("Welcome to the Rock,Paper,Scissors Game.\n");
    printf("Enter the number of round you want to play: ");
    scanf("%d",&r);
    for (int i = 1; i <= r; i++)
    {
        printf("Enter 1 for Rock.\nEnter 2 for Paper.\nEnter 3 for Scissors.\n");
        printf("Enter the choice:\n");
        scanf("%d", &temp);
        playerchar = alpha[temp - 1];
        printf("You choose %c\n", playerchar);

        c = randomnumber(3) + 1;
        compchar = alpha[c - 1];
        printf("Computer choose %c\n", compchar);
        // compare the score
        if (greater(compchar, playerchar) == 1)
        {
            c1++;
            printf("Computer got it!\n");
            printf("Player point=%d\n", p1);
            printf("Computer points=%d\n", c1);
        }
        else if (greater(compchar, playerchar) == -1)
        {
            printf("It was Draw!\n");
            printf("Player point=%d\n", p1);
            printf("Computer points=%d\n", c1);
        }
        else
        {
            p1++;
            printf("You got it!\n");
            printf("Player point=%d\n", p1);
            printf("Computer points=%d\n", c1);
        }
        printf("\n\n");
    }
    printf("The final score are:\n");
    printf("\nPlayer score=%d\nComputer score=%d\n", p1, c1);
    if (p1 > c1)
    {
        printf("Congratulation you won the Game.\n\n");
    }
    else if (c1 > p1)
    {
        printf("Sorry you loose the Game better luck next time.\n\n");
    }
    else if (c1 == p1)
    {
        printf("Oops you both got equal points.\n\n");
    }
    return 0;
}