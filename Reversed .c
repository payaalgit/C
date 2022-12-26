// write a program the user to input an interger and then outputs the number with digits reversed
#include<stdio.h>

void main()

{
	int num , reminder,i,sum=0;
	printf ("input a number");
	scanf("%d",& num);
	for (i=num;i!=0;i=i/10)
	{
		reminder =i%10 ;
		sum =sum*10+reminder;
		
		}	
	printf("this number in reverse order = %d / n",sum);
	
}
