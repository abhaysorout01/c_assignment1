#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("a is the greatest\n");
    else if(b>a && b>c)
        printf("b is the greatest\n");
    else
        printf("c is the greatest\n");
    return 0;
}