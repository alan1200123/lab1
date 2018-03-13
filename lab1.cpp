#include<iostream>
using namespace std;

int main()
{
S:
	cout<<"insert an positive integer"<<endl;
	int i;
	cin>>i;
	if(i<=0)
	goto S;

	while(i != 1)
	{
		if( i%2 == 1)
			i=i*3+1;
		else
			i=i/2;
		cout<<i<<" ";
	}
	return 0;
}
