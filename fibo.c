/* Sample C code */
#include <stdio.h>
int fib(int p)
{
    if(p==0)
    {
        return 0;
    }
    else if (p==1)
    {
        return 1;
    }
    else 
    {
        return fib(p-1)+fib(p-2);
    }
}
int main()
{ 
    int n,fibonacci;
    printf("Enter n:");
    scanf("%d",&n);
    fibonacci=fib(n);
    printf("the nth term is: %d ",fibonacci);
}

