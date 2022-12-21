//Write a program to print numbers from 1 to n useing loop

#include<Stdio.h>
int main()
{
	int i,n;
	// Input Number From User
	
	printf("Enter any final number:");
	scanf("%d",&n);
	
	//Loop Start=1 ,end=n(Depend user Input),update=1
	
	for(i=1;i<=n;i++)
	{
		//Print one by one value depand of loop
		
		printf("%d\n",i);
	}
}
