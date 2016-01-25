#include< stdio.h>
#include< conio.h>

void quicksort(int [],int,int);
int partition(int [],int,int);


main()
{
int a[20],p,q,i,n;
clrscr();

printf("Enter The number Of Elements\t: ");
scanf("%d",&n);
for(i=0;i< n;i++)
{
printf("\nElement %d\t: ",i+1);
scanf("%d",&a[i]);
}

p=0;
q=n-1;
printf("\nArray Befor Sorting : ");
for(i=0;i< n;i++)
printf("%5d",a[i]);
quicksort(a,p,q);

printf("\nArray After Sorting : ");
for(i=0;i< n;i++)
printf("%5d",a[i]);
getch();
return 0;
}


void quicksort(int a[],int p,int q)
{
int j;
if(p< q)
{
j=partition(a,p,q+1);
quicksort(a,p,j-1);
quicksort(a,j+1,q);
}
}

int partition(int a[],int m,int p)
{
int v,i,j;
int temp;
v=a[m];
i=m;j=p;
do
{
do
{
i += 1;
}
while(a[i]< v);
do
{
j -= 1;
}
while(a[j]>v);

if(i< j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
while(i< j);
a[m] =a[j];
a[j] = v;
return j;
}

