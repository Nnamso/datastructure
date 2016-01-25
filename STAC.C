#include<stdio.h>
#include<conio.h>
void main()
{
int f,a,i,top=-1,stack[10];
int press,menu,insert,addded_item;
int item;
int gh;
char c;
clrscr();
gh:
printf("\n***********WELCOME**************\n");
printf("\n---OGBUJI`S WORK---\n");
printf("\n1.Insert\n2.Delete\n3.View\n4.Quit\n");
printf("Make your choice from the above list:");
scanf("%d", &a);
switch(a)
{
df:
case 1:
top=stack[top];
{
printf("Enter the number ");
scanf("%d", &a);
{
top=top+1;
}
printf("\npress 1 to go menu");
scanf("%d", &a);
getch();clrscr();
if(f==1)
goto df;
}

{
goto gh;


}
{
case 2:
if(top<0)
{
printf("underflow");
}
else
{
top=top-1;
}
break;
case 3:
if(top<0)
{
printf("Empty stack");
}
else
for(i=0;i<=top;i++)
{
printf("\n\t%d", stack[i],i+1);
scanf("%d", &i);
}
printf("press 1 to goto menu");
if(f==1)
goto df;
else
{
exit(0);
break;
}

}
}


}