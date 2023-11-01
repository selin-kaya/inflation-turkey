#include <stdio.h>

int main(void) {
  
  double inflation[12]={11.10, 4.81, 5.46, 7.25, 2.98, 4.95, 2.37, 1.46, 3.08, 3.54, 2.88, 1.18};

  int i;
  double total=0;
  double average;

  for(i=0;i<12;i++)
    {
      total+=inflation[i];
    }
  
  average=total/12;
  printf("the average value of monthly inflation is %.2lf", average); 


  total=0;

  for(i=0;i<12;i++)
    {
      total+=inflation[i];
    }

  printf("the yearly inflation of 2022 is %.2lf", total);


  double min=inflation[0];
  double max=inflation[0];
  
  for(i=0;i<12;i++)
    {
       if(inflation[i]<min)
       {
          min=inflation[i];
       }
       if(inflation[i]>max)
       {
         max=inflation[i];
       }
     }

  printf("%lf is the minimum inflation of 2022.\n",min);
  printf("%lf is the maximum inflation of 2022.",max);

  return 0;
}