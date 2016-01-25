#include<stdio.h>
#include<process.h>
#include<conio.h>
#define max 6
int queue_arr[max];
int rear=-1;
int front=-1;
void main()
{
int choice,ch;
clrscr();
while(1)
{
printf("1.Insert\n2.Delete\n3.Display\n4.Quit\n");
printf("Enter your choice");
scanf("%d", &choice);
switch(choice)
{
case 1:
{
int added_item;
if(rear==max-1)
printf("queue overflow");
else
{
if(front==-1)
front=0;
printf("Enter the number to insert into queue\n");
scanf("%d", &added_item);
rear=rear+1;
queue_arr[rear]=added_item;
}
}
clrscr();
break;
case 2:
{
if(front==-1||front>rear)
{
printf("queue underflow");
return;
}
else
{
printf("\n Element deleted from queue is %d",queue_arr[front]);
front=front+1;
}
}
clrscr();
break;
case 3:
{
int i;
if(front==-1)
printf("\n queue is empty");
else
{
printf("\n queue is");
for(i=front;i<=rear;i++)
printf("\t%d",queue_arr[i]);
}
getch();
}
break;
case 4:
{
exit(0);
}
break;

}
clrscr();
}
}