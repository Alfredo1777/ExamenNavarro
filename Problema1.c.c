#include<stdio.h>
             
int problema(int a,int b)   
{             
  if (b==0)   
  {
    return 1;
  }
  else   
  { 
    return a*problema(a, b-1); 
  }
}                          
                                   
int main()
{
  int a=0;
  int b=0;
  printf("Introduce a: ");
  scanf("%d",&a);
  printf("Introduce b: ");
  scanf("%d",&b);
  int res=problema(a,b);
  printf("%d^%d: %d\n",a,b,res);
}
