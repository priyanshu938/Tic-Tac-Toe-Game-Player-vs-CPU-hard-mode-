
#include <stdio.h>

#include <conio.h>

#include <string.h>

int hardcheck(char M[3][3],char o)

{

int i,j,c=0;

if(o=='O')

{

for(i=0;i<3;i++){for(j=0;j<3;j++){if(M[i][j]=='.'){M[i][j]='O';if(check(M,'O')){M[i][j]='O';c=1;break;}else M[i][j]='.';}

}



if(c==1)

return 2;}}c=0;

if(o=='X')

{

for(i=0;i<3;i++){for(j=0;j<3;j++){if(M[i][j]=='.'){M[i][j]='X';if(check(M,'X')){M[i][j]='O';c=1;break;}else M[i][j]='.';}

}



if(c==1)

return 4;}}

return 1;





}





void display(char M[3][3])

{

int i,j;printf("\t\t");

for(i=0;i<3;i++){for(j=0;j<3;j++){printf("%c\t",M[i][j]);}printf("\n\t\t");}

}

int fulldotcheck(char M[3][3]){



int i,j;

for(i=0;i<3;i++){for(j=0;j<3;j++){if(M[i][j]=='.')return 0;}}

return 1;

}

int check(char M[3][3],char cp)

{

if(M[0][0]==cp&&M[0][1]==cp&&M[0][2]==cp

||M[0][0]==cp&&M[1][0]==cp&&M[2][0]==cp

||M[0][0]==cp&&M[1][1]==cp&&M[2][2]==cp

||M[0][1]==cp&&M[1][1]==cp&&M[2][1]==cp

||M[0][2]==cp&&M[1][2]==cp&&M[2][2]==cp

||M[0][2]==cp&&M[1][1]==cp&&M[2][0]==cp

||M[1][0]==cp&&M[1][1]==cp&&M[1][2]==cp

||M[2][0]==cp&&M[2][1]==cp&&M[2][2]==cp)

return 1;

return 0;

}int main()

{

char n1[20],M[3][3];

int i,j,x,y,r,ch;

clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");printf("\t\tHello guys! I am Drax.\n\t\tMaster Priyanshu has sent me to guide you \n\t\twhile playing this TIC - TAC -TOE game.");

printf("\n\t\tEnter your name:\n");

printf("\t\t");gets(n1);

printf("\n\t\tOkhie...Best of luck %s !\n\t\t Let's start the game !\n\t\tPress any key to start....",n1);getch();

man:r=0;

for(i=0;i<3;i++){for(j=0;j<3;j++){M[i][j]='.';}}

clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");srand(time(NULL));



while(1)

{r++;

if(r%2!=0){

printf("\n\t\t%s your turn.\n\t\tEnter cell coordinates :\n",n1);

read:fflush(stdin);printf("\t\t");scanf("%d",&x);printf("\t\t");scanf("%d",&y);

if(M[x][y]!='.'||!(0<=x&&x<=2&&0<=y&&y<=2)){printf("\n\t\tInappropriate entry.\n\t\tRe-enter coordinates:\n");goto read;}

M[x][y]='X';

if(check(M,'X')){clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");display(M);

printf("\n\n\t\tGAME OVER ! %s is the winner.",n1);break;}

if(fulldotcheck(M)){clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");display(M);

printf("\n\n\t\tKhichdi!!");break;}

clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");

display(M);printf("\n");}

if(r%2==0){

printf("\t\tIts CPU's turn.\n\t\tPress any key to continue....");

getch();

if(hardcheck(M,'O')==2){clrscr();printf("\n\n\n\n\n");printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");display(M);printf("\n\n\t\tGAME OVER ! CPU is the winner.");

break;}

if(hardcheck(M,'X')==4){}

else{

hum:

x=rand()%3;y=rand()%3;

if(M[x][y]!='.')goto hum;M[x][y]='O';

}





if(fulldotcheck(M)){clrscr();printf("\n\n\n\n\n");printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");display(M);printf("\n\n\t\tKhichdi!!");break;}



clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");

display(M);printf("\n");



}

}printf("\n\t\tPress any key to continue....");getch();

clrscr();printf("\n\n\n\n\n");

printf("\t\t\t");printf("TIC - TAC - TOE\n\n\n");

printf("\n\t\tPress 1 if  you want to play once more \n\t\tor any other number key to Quit the game respectively....");

printf("\n\t\t");scanf("%d",&ch);

if(ch==1){goto man;}

else

exit(0);

getch();return 0;

}

