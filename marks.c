#include<iostream.h>
#include<stdio.h>
int main()
{
int marks;
printf("enter your marks");
scanf("%d", marks);
if((marks<=100)&&(marks>=85))
print("grade A");
if((marks<84)&&(marks>70))
print("grade B");
if((marks<69)&&(marks>55))
print("grade C");
if((marks<54)&&(marks>40))
print("grade D");
else
print("grade F");
}
