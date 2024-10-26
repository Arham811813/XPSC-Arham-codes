#include <stdio.h>
int main()
{
    int num,i=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    do
    {
        
        printf("%d\n",i+1);
        i=i+1;
    }while(i<=num);
   
    
}
/*
 int num,i=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    do
    {
        
        printf("%d\n",i);
        i=i+1;
    }while(i<=num);

   1.    I  see this program me selet i intezer number 0 after do while loop funcation me see printf oftion writed printf("%d\n",i); and this time this program answer is 0123
   2.    if I recreate do while loop printf funcation add [printf("%d\n",i+1);] this time I see answer is coming 1234
    This is the the defrance in this program
   3.    We create this puncation other techince
   this is 
           1.{only chang int i intezer number 0 to chang 1}


           at last i see while funcation i<10 
           In this funcation we see last number is 9 beacause <10.
           if i add <=  i see last number is 10
*/