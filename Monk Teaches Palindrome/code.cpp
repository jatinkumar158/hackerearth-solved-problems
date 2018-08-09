#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        char a[100000]={'\0'},b[100000]={'\0'};
        cin>>a;
        int len=strlen(a);
        int j=0;
        for(int i=len-1;i>=0;i--)
        {
            b[j]=a[i];
            j++;
        }
        if(!strcmp(a,b))
        {
            if(len%2==0)
            {
                cout<<"YES EVEN\n";
            }
            else
            {
                cout<<"YES ODD\n";
            }
        }
        else
        {
            cout<<"NO\n"
;        }
    }
}
