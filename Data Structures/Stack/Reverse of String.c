/*Program 4.3: Program of reversing a string using stack */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 25
int top=-1;
char stack[SIZE];
char pop();
void push(char);
void main()
{
char str[20];
int i;
clrscr();
gets(str);
printf("\nEnter a string :");
//Push characters of the string str on the stack
for(i = 0; i < strlen(str); i++)
push(str[i]);
//Pop characters from the stack and store in string str
for(i=0;i<strlen(str);i++)
str[i] = pop();
printf("\nString in reversed order is: ");
puts(str);
getch();
} //end of main
void push(char item)
{
if(top==(SIZE-1))
printf("\nStack Overflow");
else
stack[++top]=item;
} //end of push function
char pop()
{
if(top == -1)
printf("\nStack Underflow");
else
return stack[top--];
} //end of pop function