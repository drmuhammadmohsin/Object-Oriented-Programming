#include<iostream>
using namespace std;
int add(int x, int y)
{
	return x+y;
}
int main()
{
	int i,j,k;
	cout<<"please enter the number"<<endl;
	cin>>i;
	j=0;
	while(j<11)
	{
		cout<<i*j<<endl;
		j++;
	}
	
	int r;
	r=add(20,20);
	cout<<"the function result is"<<r<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(double)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(char)<<endl;
	cout<<sizeof(string)<<endl;
	string a="My name is Muhammad Mohsin";
	cout<<a;
	return 0;
}
