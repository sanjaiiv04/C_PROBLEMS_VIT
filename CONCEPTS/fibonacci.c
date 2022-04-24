// fibonacci series
//register no:21BRS1021
#include <stdio.h>
int main()    
{    
 int a=0,b=1,c,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",a,b);    
 for(int i=2;i<number;++i)
{  
  c=a+b;    
  printf(" %d",c);    
  a=b;    
  b=c;    
} 
  return 0;  
} 
