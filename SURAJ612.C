//Write a program to print n to 1 using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int s,a;

 clrscr();
 a = 1;
 printf("Enter the number :");
 scanf("%d",&s);
 while(s>=a){
 printf("%d\n",s);
 s--;}
getch();
}