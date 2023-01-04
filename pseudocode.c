#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define height 30
#define width 30
struct score_save
{
    char player_name[20];
    int player_score;
};
struct score_save a;
int gameover, flag;
int x, y, fruit_x, fruit_y, score = 0;
int tailx[100], taily[100];
int count = 0;
int choice;
int l;
char back, player[30];
char play;
int level1;
void pattern();
void fruit();
void option();
void username();
void quit();
void box();
void input();
void easy_file(struct score_save);
void medium_file(struct score_save);
void hard_file(struct score_save);
void movement();
void level();
void playagain();
int main()
{
up8:
    gameover = 0;
    count = 0;
    pattern();
up4:
up7:
    option();
    if (choice == 1)
    {
    up6:
        username();
        level();
        fruit();
        while (!gameover)
        {
            if (level1 == 1)
            {
                for (int i = 0; i < 7000; i++)
                {
                    for (int j = 0; j < 4500; j++)
                    {
                    }
                }
            }
            else if (level1 == 2)
            {
                for (int i = 0; i < 4000; i++)
                {
                    for (int j = 0; j < 4000; j++)
                    {
                    }
                }
            }
            else if (level1 == 3)
            {
                for (int i = 0; i < 0; i++)
                {
                    for (int j = 0; j < 0; j++)
                    {
                    }
                }
            }
            else if (level1 == 4)
            {
                goto up7;
            }
            else
            {
                system("cls");
                pattern();
                printf("Wrong choice!!");
                printf("\nPress y to go back: ");
                back = getch();
                if (back == 'y')
                {
                    goto up6;
                }
            }
            box();
            input();
            movement();
        }
    }
    else if (choice == 2)
    {
        system("cls");
        pattern();
        printf("Press w to move up\n");
        printf("Press a to move left\n");
        printf("Press s to move down\n");
        printf("Press d to move right\n");
        printf("For every Fruit score is added by 5.\n");
        printf("\n\n");
        printf("Press b to go back\n");
        back = getch();
        if (back == 'b')
        {
            goto up4;
        }
    }
    else if (choice == 3)
    {
        quit();
    }
    else
    {
        system("cls");
        pattern();
        printf("Wrong choice!!");
        printf("\nPress i to go back: ");
        back = getch();
        if (back == 'i')
        {
            goto up4;
        }
    }
    if (level1 == 1)
        easy_file(a);
    else if (level1 == 2)
        medium_file(a);
    else if (level1 == 3)
        hard_file(a);
    if (gameover == 1)
    {
        system("cls");
        printf("   _|_|_|                                                                                     \n");
        printf(" _|           _|_|_|   _|_|_|  _|_|       _|_|       _|_|     _|      _|     _|_|     _|  _|_|\n");
        printf(" _|  _|_|   _|    _|   _|    _|    _|   _|_|_|_|   _|    _|   _|      _|   _|_|_|_|   _|_|\n");
        printf(" _|    _|   _|    _|   _|    _|    _|   _|         _|    _|     _|  _|     _|         _|\n");
        printf("   _|_|_|     _|_|_|   _|    _|    _|     _|_|_|     _|_|         _|         _|_|_|   _|\n");
        printf("\n\n\n\n");
        printf("==============> Score is %d <=============", score);
        printf("\n\n\n\n");
        playagain();
        if (play == 'p')
        {
            system("cls");
            pattern();
            goto up8;
        }
        else if (play == 'q')
        {
            quit();
        }
        else
        {
            printf("\nwrong choice!!");
        }
    }
    return 0;
}
void pattern()
{
    printf("\t\t\t\t .----------------.  .-----------------. .----------------.  .----------------.  .----------------.\n");
    printf("\t\t\t\t| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
    printf("\t\t\t\t| |    _______   | || | ____  _____  | || |      __      | || |  ___  ____   | || |  _________   | |\n");
    printf("\t\t\t\t| |   /  ___  |  | || ||_   \\|_   _| | || |     /  \\     | || | |_  ||_  _|  | || | |_   ___  |  | |\n");
    printf("\t\t\t\t| |  |  (__ \\_|  | || |  |   \\ | |   | || |    / /\\ \\    | || |   | |_/ /    | || |   | |_  \\_|  | |\n");
    printf("\t\t\t\t| |   '.___`-.   | || |  | |\\ \\| |   | || |   / ____ \\   | || |   |  __'.    | || |   |  _|  _   | |\n");
    printf("\t\t\t\t| |  |`\\____) |  | || | _| |_\\   |_  | || | _/ /    \\ \\_ | || |  _| |  \\ \\_  | || |  _| |___/ |  | |\n");
    printf("\t\t\t\t| |  |_______.'  | || ||_____|\\____| | || ||____|  |____|| || | |____||____| | || | |_________|  | |\n");
    printf("\t\t\t\t| |              | || |              | || |              | || |              | || |              | |\n");
    printf("\t\t\t\t| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
    printf("\t\t\t\t '----------------'  '----------------'  '----------------'  '----------------'  '----------------'\n");
    printf("\n\n\n");
}
void option()
{
    system("cls");
    pattern();
    printf(" ==============> 1)New Game <============= \n");
    printf(" ==============> 2)Help <================= \n");
    printf(" ==============> 3)Exit <================= \n");
    printf("Enter your choice:");
    scanf("%d", &choice);
}
void username()
{
    system("cls");
    pattern();
    printf("Enter your name: ");
    scanf("%s", &player);
    strcpy(a.player_name, player);
}
void level()
{
    system("cls");
    pattern();
    printf("==============> 1)Easy <=================\n");
    printf("==============> 2)Medium <=================\n");
    printf("==============> 3)Hard <=================\n");
    printf(" =============> 4)Go back <================= \n");
    printf("Choose level: ");
    scanf("%d", &level1);
}
void fruit()
{
    x = 30 / 2;
    y = 30 / 2;
up:
    srand(time(NULL));
    fruit_x = rand() % 29;
    if (fruit_x == 0 && fruit_x == 29)
    {
        goto up;
    }
up1:
    srand(time(NULL));
    fruit_y = rand() % 29;
    if (fruit_y == 0 && fruit_y == 29)
    {
        goto up1;
    }
    score = 0;
}
void box()
{
    system("cls");
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                printf("# ");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("0 ");
                }
                else if (i == fruit_x && j == fruit_y)
                {
                    printf("%c ",6);
                }
                else
                {
                    int n = 0;
                    for (int k = 0; k < count; k++)
                    {
                        if (i == tailx[k] && j == taily[k])
                        {
                            printf("o ");
                            n = 1;
                        }
                    }
                    if (n == 0)
                    {
                        printf("  ");
                    }
                }
            }
        }
        printf("\n");
    }
}
void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
            flag = 1;
            break;
        case 'w':
            flag = 2;
            break;
        case 's':
            flag = 3;
            break;
        case 'd':
            flag = 4;
            break;
        }
    }
}
void movement()
{
    int *ptx = tailx;
    int *pty = taily;
    int prevx = *(ptx + 0);
    int prevy = *(pty + 0);
    int prev2x, prev2y;
    *(ptx + 0) = x;                  
    *(pty + 0) = y;
// 
    for (int i = 1; i < count; i++)
    {
        prev2x = *(ptx + i);
        prev2y = *(pty + i);
        *(ptx + i) = prevx;
        *(pty + i) = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }
    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        x--;
        break;
    case 3:
        x++;
        break;
    case 4:
        y++;
        break;
    default:
        break;
    }
    if (x <= 0 || x >= width || y <= 0 || y >= height)
    {
        Beep(700, 350);
        gameover = 1;
    }
    for (int i = 0; i < count; i++)
    {
        if (x == tailx[i] && y == taily[i])
        {
            Beep(700, 350);
            gameover = 1;
        }
    }
    if (x == fruit_x && y == fruit_y)
    {
        Beep(3000, 30);
    up2:
        srand(time(NULL));
        fruit_x = rand() % 29;
        if (fruit_x == 0 && fruit_x == 29)
        {
            goto up2;
        }
    up3:
        srand(time(NULL));
        fruit_y = rand() % 29;
        if (fruit_y == 0 && fruit_y == 29)
        {
            goto up3;
        }
        score += 5;
        a.player_score = score;
        count++;
    }
    printf("\n\n\n");
    printf("\t\t\tScore=%d", score);
}
void easy_file(struct score_save n)
{
    FILE *fp1;
    fp1 = fopen("easy_score.txt", "a+");
    fprintf(fp1, "%s\t\t%d\n", n.player_name, n.player_score);
}
void medium_file(struct score_save n)
{
    FILE *fp1;
    fp1 = fopen("medium_score.txt", "a+");
    fprintf(fp1, "%s\t\t%d\n", n.player_name, n.player_score);
}
void hard_file(struct score_save n)
{
    FILE *fp1;
    fp1 = fopen("hard_score.txt", "a+");
    fprintf(fp1, "%s\t\t%d\n", n.player_name, n.player_score);
}
void playagain()
{
    printf("\nPress p to play again and q to quit: ");
    play = getch();
}
void quit()
{
    system("cls");
    char str[20] = {'T', 'h', 'a', 'n', 'k', ' ', 'Y', 'o', 'u'};
    char *ptr;
    ptr = &str[0];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", *(ptr + j));
            if (i == 8 && j == 8)
            {
                printf("\t\tfor playing our Game.");
            }
        }
        printf("\n");
    }
    for (int i = 7; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", *(ptr + j));
        }
        printf("\n");
    }
}