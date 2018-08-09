#include<iostream>
using namespace std;
int stack[999999];
int array[999999];
int top=0;
int counter=0,result=0;
void push(int i)
{
	top++;
	stack[top]=i;
}
void pop(int i)
{	
	if(top==0)
	{
		push(i);
		return;
	}
	int x=stack[top];
	top--;
	if(array[i]==-array[x])
	{
		// numbers are same
		counter=i-stack[top];
		//cout<<"counter is "<<counter<<endl;
		if(result<counter)
			result=counter;
	}
	else
	{
		push(i);
	}
}
int main()
{
	int n;
	cin>>n;
	stack[top]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>array[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(array[i]>0)
		{
			push(i);
		}
		else
		{
			pop(i);
		}
	}
	cout<<result<<endl;
}
