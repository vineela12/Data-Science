/*Program of stack using linked list */
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
void push();    //push() function declaration
void pop();     //pop() function declaration
void display(); //display() function declaration
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void main()
{
int choice;
clrscr();
while(1)
{
printf("\n1.Push");
printf("\n2.Pop");
printf("\n3.Display");
printf("\n4.Quit");
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
}//end of switch
} //end of while loop
}//end of main fuction
void push()
{
struct node *ptr;
int item;
ptr=(struct node *)malloc(sizeof(struct node));
printf("Enter a value to be pushed onto the stack: ");
scanf("%d",&item);
ptr->data=item;
ptr->next=top;
top=ptr;
}//end of push fuction
void pop()
{
struct node *ptr,*next;
if(top==NULL)
printf("\nStack is Empty");
else
{
ptr=top;
printf("\nPopped element is : %d\n",ptr->data);
top=top->next;
free(ptr);
}
}//end of pop function definition
void display()
{
struct node *p;
p=top;
if(top==NULL)
printf("\nStack is empty\n");
else
{
printf("\nStack elements:\n");
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
} //end of display function