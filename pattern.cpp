#include <bits/stdc++.h>
using namespace std;

void printValue1(int x,int temp)
{
    if(x==temp)
    {
    	cout<<x;
    	return ;
    }
    cout<<x<<" ";
    printValue1(x+5,temp);
    return;
}



void printValue(int n,int temp)
{
	if(n>0)
	{
		cout<<n<<" ";
		printValue(n-5,temp);
		return ;
	}

	if(n<=0)
	{
		printValue1(n,temp);
		return ;
	}
}


int main()
{
	    int n,temp;
	    clock_t time_req;
		cin>>n;
		temp=n;
		printValue(n,temp);
		printf("\n");
		cout<<clock()<<endl;
	return 0;
}