// write a program two number are entered through the key word find the value of one number to the power
#include<stdio.h>


int main()

{
	int n, i, value , result =1;
	printf ("enter the base value ");
	scanf("%d",& value);
	
	printf("enter power");
	scanf("%d",& n );
	for(i=1;i<=n;i++)
       {
	   result = value * result ;
	   
	   }
	   printf("power= %d",result);
	}
