// Author= Jatin Kumar
#include<stdio.h>
int main()
{
	int test,n,i;
	// enter no. of test cases
	scanf("%d",&test);
	while(test--)
	{
		// enter no. of stones
		scanf("%d",&n);
		int A[n],B[n];
		for(i=0;i<n;i++)
		{
			// weight of stones collected by rupam
			scanf("%d",&A[i]);
		}
		for(i=0;i<n;i++)
		{
			// weight of stones collected by ankit
			scanf("%d",&B[i]);
		}
		int AA[101],AB[101];
		for(i=0;i<101;i++)
		{	
			// initialize both arrays with zero
			AA[i]=0;
			AB[i]=0;
		}
		for(i=0;i<n;i++)
		{
			AA[A[i]]++;
			AB[B[i]]++;
		}
		// finding the maximum occurances in AA and AB
		int maxA,maxB,wa,wb;
		maxA=AA[0];
		maxB=AB[0];
		for(i=0;i<101;i++)
		{
			if(maxA<=AA[i])
			{	
				maxA=AA[i];
				wa=i;
			}
		}
		for(i=0;i<101;i++)
		{
			if(maxB<=AB[i])
			{
				maxB=AB[i];
				wb=i;
			}
		}
		if(wa>wb)
		{
			printf("Rupam\n");
		}
		else if(wa<wb)
		{
			printf("Ankit\n");
		}
		else
		{
			printf("Tie\n");
		}
	}
}
