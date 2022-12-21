#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number for factorial"<<endl;
	cin>>num;
	
	int fact=1;
	
	for (int i=num; i>0; i--)
	{
	
	fact=fact*i;
		
	}
	cout<<"factorial of that number is : "<<fact;
	return 0;
	
}
