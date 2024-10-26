#include <stdio.h>
int main()
{
  float BMI,Weight,Height,Distance,Time;
  int open;
  printf("1.BMI\n2.Speed\n");
  printf("Enter Your choice(1or2):\n");
  scanf("%d",&open);
  
  switch(open)
  {
    case 1:
   {    
          printf("Weight in kg\n");
          scanf("%f",&Weight);
         
          printf("Height in meter\n");
          scanf("%f",&Height);
         
          //scanf("%f%f",&Weight,&Height);
          
         //BMI=Weight/(Height*Height);
          printf("BMI=%.2f\n",Weight/(Height*Height));

          if (BMI<18 && BMI>=24.9)
          {
            printf("Your Weight is perfact.\n");
          }
          else if(BMI>18)
          {
            printf("Your Weight is underweight.\n");
          }
          else if (BMI<25 && BMI>30) 
          {
            printf("Your Weight is overweight.\n");
          }
         else
         {
          printf("Your weight is obses.\n");
         }
          break;
   }
    case 2:
   
    {


          printf("Distance in meter\n");
          scanf("%f",&Distance);
         
          printf("Time in secand\n");
          scanf("%f",&Time);
          
          //scanf("%f%f",&Distance,&Time);
          //Speed=Distance/Time;
          printf("Speed(mile/s)=%.2f",Distance/Time);
          break;
    }
  default:
    printf("Error!");
}
    return 0;
}