


#include<stdio.h> 
#include<conio.h> 
void main() 
{
int i,n,item,a[20]; 
clrscr();
printf("\nEnter no of elements=");
scanf("%d",&n); 
printf("\nEnter %d elements=",n); 
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]); 
} 
printf("\nEnter the element to be search:"); 
scanf("%d",&item);
for(i=0;i<n;i++)
{ 
if(a[i]==item) 
{ 
printf("\n\t%d is present at position %d",a[i],i+1); 
break; 
} 
} 
if(i==n) 
printf("\nElement is not Present"); 
getch(); 
} 

