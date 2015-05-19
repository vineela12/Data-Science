/*Stack implementation using arrays (static implementation of stacks) */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10
void push();
void pop();
void display();
int top= -1;       // value of top is initialised to -1
int stack[SIZE];
void main()
{  int choice;
while(1)
{
printf("\n1.Push\n");
printf("\n2.Pop\n");
printf("\n3.Display\n");
printf("\n4.Quit\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(1);
default:printf("Invalid Choice\n");
}
}
}
void push()
{  int item;
if(top==(SIZE-1))
printf("\nStack Overflow");
else
{
printf("\nEnter the item to be pushed in stack:");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
}
void pop()
{
if(top==-1)
printf("Stack Underflow\n");
else
{
printf("\nPopped element is : %d\n",stack[top]);
top=top-1;
}
}
void display()
{
int i;
if(top== -1)
printf("\nStack is empty\n");
else
{
printf("\nStack elements:\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
}