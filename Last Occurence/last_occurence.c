#include<stdio.h>
#define N 1000001
long long int map[N];
long long int array[N];
int main()
{
	long long int test,n,i;
	scanf("%lld",&test);
	while(test--)
	{
		// enter no. of elements in the array
		scanf("%lld",&n);
		for(i=0;i<999999;i++)
		{
			map[i]=-1;
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&array[i]);
			map[array[i]]=i+1;
		}
		// enter no. of queries
		long long int q,x;
		scanf("%lld",&q);
		while(q--)
		{
			// enter element to find;
			scanf("%lld",&x);
			if(x<1000000)
			printf("%lld\n",map[x]);
			else
			printf("-1\n");
		}
	}
}
