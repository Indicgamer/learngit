#include<stdio.h>
int main()
{
    int num,n;
    int sum=0,pro=1;
    fflush(stdin);
    scanf("%d",&num);
    n =num;
    while (n)
    {
        n = n/10;
        sum += n%10;
        pro *= n%10;
    }
    printf("%d",pro-sum);
    
    
return 0;
}