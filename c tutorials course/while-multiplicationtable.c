#include <stdio.h>
int main()
{
    int i=0,n;
    printf("Multiplication table of ",n);
    scanf("%d",&n);
    while (i<10)
    {
      i=i+1;
      printf("%d x %d=%d\n",n,i,i*n);
    }
    
}