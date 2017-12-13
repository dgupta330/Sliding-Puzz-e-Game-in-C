#include<stdio.h>
#include<conio.h>
#include<windows.h>

//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

main ()
{
int i,j,x,y,k,t,m,z=0,n,sw=0;
char an,ans='y',b,a[3][3]={'7','1','3','2',' ','5','8','4','6'},p[3][3]={'1','2','3','4','5','6','7','8',' '};
printf("\n");

for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
if(a[j][i]==' ')
{
m=j;
n=i;
 break;}
else
{continue;}}

while(1)
{
system("cls");

printf("Arrange the numbers in this puzzle in ascending order\n\n\t\t\t\t\t\tLevel 1\n\n");

printf("\n ____________________________\n");
for(i=0;i<3;i++)
{
printf("|         |         |        |\n|         |         |        |\n");
printf("|_________|_________|________|\n");}



for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
{ gotoxy(8*(i+1),3*(j+1)+4);
printf("%c",a[j][i]);}
if((i==3)||(i==6)||(i==9))
printf("\n\n\n");}


printf("No.of moves is\t%d\n\n\n",z-1);
for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
{
if(a[j][i]==p[j][i])
 sw=sw+1;
else
sw=0;
}
}
if(sw==9)
break;
fflush(stdin);
start:

printf("enter arrow key\n\n");
printf("*UP ARROW KEY for Up\n LEFT ARROW KEY for Left\n DOWN ARROW KEY for down\n RIGHT ARROW KEY for right\n");

char b =getche();
   switch(b)
   {
   	case 72: 
t=a[m][n];
a[m][n]=a[m-1][n];
a[m-1][n]=t; 

if(m-1<0)
{printf("\nNot a appropriate move\n");
goto start;}
else
m=m-1;
break;
       
      case 75:
t=a[m][n];
a[m][n]=a[m][n-1];
a[m][n-1]=t;
if(n-1<0)
{printf("\nNot a appropriate move\n");
goto start;}
else
n=n-1;
 break;
  
      case 80:
 t=a[m][n];
a[m][n]=a[m+1][n];
a[m+1][n]=t;
if(m+1>2)
{printf("\nNot a appropriate move\n");
goto start;}
else
m=m+1;
break;

     case 77: 
t=a[m][n];
a[m][n]=a[m][n+1];
a[m][n+1]=t;
if(n+1>2)
{printf("\nNot a appropriate move\n");
goto start;}
else
n=n+1;
break;
  
 default:break;
   }
  printf("\n");

printf("\n");
z++;
}

printf("\nCongratulation! you have won\n");
printf("\ntotal no. of moves   %d",z-1);
getch();
system("cls");
}
