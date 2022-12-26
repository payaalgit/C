//Write a program to find the factorial value of any number entered through the keyboard

#include<stdio.h>
int main()
{
	int fact=1,i,n;
	//Input value user defined
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)   //Looping Start
	{
		fact=fact*i;   //Logic in factorial
	}
	printf("%d factorial value=%d",n,fact);
}
