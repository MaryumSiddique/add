#include <stdio.h>
#include <unistd.h>
int to_sum(arr[], i, n)
void init_Array(arr[], n)

int main()
{
   int cpid;
   int final_sum;
   int sum1 = 0;
   int sum2 = 0;
   int length;
   init_Array(arr, 100);
   
    for(int i = 0; i < 3 ; i++)
    {
       cpid = fork();
       if (cpid == 0)
       {
        sum1 += to_sum(arr, i+25, i*25);
       }
        else
        {
         sum2 = to_sum(arr, 0 ,25);
         final_sum = sum1 + sum2;
         printf("Final Sum" = %d,final_sum);
        }
   Wait(NULL);
   }
  init_Array(arr[], n)
  {
    for (int i = 0; i < n; i++)
     {
       arr[i] = i;
     }
  }
  int to_sum(arr[], i, n)
   {
    sum = 0;
    for(int j = i; j<n; j++)
    { 
      sum += arr[j];
     }
   return sum;
 } 


 
