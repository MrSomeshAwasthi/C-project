#include<stdio.h>
#include<stdlib.h>
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
void board()
{
    system("cls");
    printf("\n\n\t Tic Tac Toe\n");
    printf("\t\t\tmade by Somesh Awasthi\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", a[1], a[2], a[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", a[4], a[5], a[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", a[7], a[8], a[9]);
    printf("     |     |     \n\n");
}
int plot()
{
    if (a[1] == a[2] && a[2] == a[3])
        return (1);
    else if (a[4] == a[5] && a[5] == a[6])
        return (1);
    else if (a[7] == a[8] && a[8] == a[9])
        return (1);
    else if (a[1] == a[4] && a[4] == a[7])
        return (1);
    else if (a[2] == a[5] && a[5] == a[8])
        return (1);
    else if (a[3] == a[6] && a[6] == a[9])
        return (1);
    else if (a[7] == a[5] && a[5] == a[3])
       return (1);
    else if (a[1] == a[5] && a[5] == a[9])
       return (1);
    else if (a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!='6' && a[7]!='7' && a[8]!='8' && a[9]!='9')
       return (0);
    else
        return(-1);
}
int main()
{
    int i=1,j,k;
    char z;
    do
    {
        board();
        i=(i%2)?1:2;
        printf("enter number player %d",i);
        scanf("%d",&k);
        z=(i==1)?'X':'O';
        if (k == 1 && a[1]=='1')
            a[1]=z;
        else if (k == 2 && a[2]=='2')
            a[2]=z;
        else if (k == 3 && a[3]=='3')
            a[3]=z;
        else if (k == 4 && a[4]=='4')
            a[4]=z;
        else if (k == 5 && a[5]=='5')
            a[5]=z;
        else if (k == 6 && a[6]=='6')
            a[6]=z;
        else if (k == 7 && a[7]=='7')
            a[7]=z;
        else if (k == 8 && a[8]=='8')
            a[8]=z;
        else if (k == 9 && a[9]=='9')
            a[9]=z;
        else
            {printf("invalid move");
                i--;}
            j=plot();
            i++;
    }
    while (j==-1);
    board();
    if (j==1)
        printf("player %d win",--i);
    else
        printf("Draw");
        return(0);
}
