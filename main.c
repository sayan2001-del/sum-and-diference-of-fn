#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("/nSum of %d and %d is %d/n",a,b,c);
    c=a-b;
    printf("/nProduct of %d and%d is %d/n",a,b,c);

    return 0;
}
