/* Sample C code */
#include <stdio.h>
void TOH(int x,char p, char q, char r) 
{
    if (x>0)
    {
        TOH(x-1,p,r,q);
        printf("%c--->%c\n",p,r);
        TOH(x-1,q,p,r);
    }
}
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}
