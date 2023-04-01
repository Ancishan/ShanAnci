#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number: ");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
    printf("%d is largest\n", a);
    }
    else if(b>a)
    {
    pritnf("%d is largest\n", b);
    }
    return 0;

}

