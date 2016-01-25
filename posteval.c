#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

#define MAX 50

char stack[MAX] ;
char infix[MAX] ;
char postfix[MAX] ;
char eval[MAX] ;
char *s, *t ; 
int top; 

void Initialize (void);
void SetExpression (char *);
char Pop (void );
void Push (char);
int priority (char);
void Convert (void);
int Evaluate(void);

void main( )
{
int m;

clrscr( ) ;
Initialize ( ) ;
printf ( "\nEnter an infix expression: " ) ;
gets ( infix ) ;
SetExpression (infix) ;
Convert( ) ;
printf ( "\nThe Postfix expression is: " ) ;
puts(postfix);
strcpy(eval,postfix);
m=Evaluate( );
printf("answer: %d", m );

getch( ) ;
}

void Initialize (void)
{
top = -1 ;
}

void SetExpression ( char *str )
{
s = str ;
t = postfix;
}


void Push ( char c )
{
if ( top == MAX - 1 )
printf ( "\nStack is full.\n" ) ;
else
{
top++ ;
stack[top] = c ;
}
}


char Pop ( void )
{
if ( top == -1 ) 
return -1 ;
else
{
char item = stack[top] ;
top-- ;
return item ;
}
}

int priority(char c)
{
if ( c == '*' || c == '/' || c == '%' ) 
return 2;
else if ( c == '+' || c == '-' )
return 1;
else
return 0;
}


void Convert (void)
{
char x ;

while ( *( s ) )
{ 
if ( *( s ) == ' ' || *( s ) == '\t' )
{
s++ ;
continue ;
}

if ( isdigit ( *( s ) ) )
{
while ( isdigit ( *( s ) ) )
{
*( t ) = *( s ) ;
s++ ;
t++ ;
}
}
if ( *( s ) == '(' )
{
Push ( *( s ) ) ;
s++ ;
}
if ( *( s ) == '*' || *( s ) == '+' || *( s ) == '/' || *( s ) == '%' || *( s ) == '-' ) /*operators*/
{
if ( top != -1 )
{
x = Pop ( ) ;
while ( priority ( x ) >= priority ( *( s ) ) )
{
*( t ) = x ;
t++ ;
x = Pop ( ) ;
}
Push( x ) ;
Push ( *( s ) ) ;
}
else Push( *( s ) ) ;
s++ ;
}
if ( *( s ) == ')' )
{
x = Pop ( ) ;
while ( x != '(' )
{
*( t ) = x ;
t++ ;
x = Pop ( ) ;
}
s++ ;
}
}
while ( top != -1 )
{
x = Pop ( ) ;
*( t ) = x ;
t++ ;
}
t++ ;
}

int Evaluate(void)
{
int i,l,a,b,q,z;
l=strlen(eval);
for(i=0;i<l;i++)
{
if ( isdigit ( eval[i] ) )
{
Push(eval[i]);
}
else if ( eval[i] == '*' || eval[i] == '+' || eval[i] == '/' || eval[i] == '%' || eval[i] == '-' )
{
a = Pop ( );
b = Pop ( );

switch( eval[i] )
{
case '+' : q=b+a; break;
case '-' : q=b-a; break;
case '*' : q=b*a; break;
case '/' : q=b/a; break;
}
Push ( q );
}
}
z = Pop ( );
return z;
}
