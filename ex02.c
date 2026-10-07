
#include "stdio.h"
int main()
{
int a,b;
char ch;
printf("+ for addition\n - sub\n* multi\n/division\n%mod");
printf("\nenter your choices=");
scanf("%c",&ch);
scanf("%d%d",&a,&b);
switch(ch)
{
    case '+':
    printf("add =%d",a+b);
    break;
    case '-':
    printf("sub=%d",a-b);
    break;
    case '*':
    printf("multi=%d",a*b);
    break;
    case '/':
    printf("div=%d",a/b);
    break;
    case '%':
    printf("mod=%d",a%b);
    break;
    default:
    printf("invalid");

}
}

