//Write a program to print 1 to n using a while loop.
#include<stdio.h>
#include<conio.h>

void main(){
int a = 1;
int s;
clrscr();
printf("Enter the number :");
scanf("%d",&s);
while(a<=s){
   printf("%d\n",a);
a++;
}
getch();
}