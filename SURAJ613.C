//Write a program to print 1 to n using a do while loop.

/*


*/


#include<stdio.h>
#include<conio.h>


void main(){
int z;
int s = 1;
clrscr();
printf("Enter the number :");
scanf("%d",&z);
do{
printf("%d\n",s);
s++;
}while(s<=z);
getch();
}