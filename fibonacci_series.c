#include<stdio.h>
 int main()
 {
 	int a,b,term,i,c;
 	printf("enter the number of terms");
 	scanf("%d",& term);
 	a=0;
 	b=1;
 	c=0;
 	printf("fibonacci terms \n");
 	for (i=1; i<= term;i++)
 	{
	 
 	printf("%d ",c);
 	a=b;
 	b=c;
 	c=a+b;
      }
	  }
