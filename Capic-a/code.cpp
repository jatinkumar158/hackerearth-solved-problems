#include <iostream>
#include<string.h>
using namespace std;
int main() {
	
	int test;
	cin>>test;
	while(test--)
	{
	    char array[50];
	    cin>>array;
	    int len=strlen(array);
	    int i=0;
	    int flag=0;
	    while(array[i])
	    {   
	        if(array[i]!=array[len-i-1])
	        {
	            flag=1;
	            break;
	        }
	        i++;
	    }
	    if(flag)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	
}
