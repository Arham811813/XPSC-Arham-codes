#include <stdio.h>
int main()
{
    int Science,Math;
    printf("Science");
    scanf("%d",&Science);
    printf("Math");
    scanf("%d",&Math);
    
    if (Science>=33  && Science<=100 && Math>=33 && Math<=100)
    {
        printf("You win 50 taka.");
    }
    else if (Science>=33 && Science<=100 || Math>=33 && Math<=100)
    {
        printf("You win 25.");
    }
    
    else
    {
        printf("Next time try to very hard.\n");
    }
    
    return 0;
}
