#include<stdio.h>

float powr(float base, float power){
float res =1;
for(int i=0;i<power;i++) res *= base;
return res;
}

void main()
{
  int n;
  float e[20],p[20];
  int i;
  float ut,u,x,y;

  printf("\n Enter Number of Processes :: ");
  scanf("%d",&n);
  

  for(i=0;i<n;i++)
  {
   printf("\n Enter Execution Time for P%d ::",(i+1));
   scanf("%f",&e[i]);
   printf("\n Enter Period for P%d ::",(i+1));
   scanf("%f",&p[i]);
  }
  //calculate the utilization
  for(i=0;i<n;i++)
  {
   x=e[i]/p[i];
   ut+=x;
  }

  //calculate value of U
  y=(float)n;
  y=y*((powr(2.0,1/y))-1);
  u=y;

  if(ut<u)
  {
 printf("\n As %f < %f ,",ut,u);
 printf("\n The System is surely Schedulable");
  }
  else
 printf("\n Not Sure.....");
 
}
