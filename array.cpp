#include<iostream>
using namespace std;

int main()

{  

int arr[5]= {12,13,10,90,100};
int count=0;

for(int i=0; i<5; i++)
{
	if (arr[i]%2!=0)
	{
		count=count+1;
	}
}
cout<<"Total Number of elements which aare even" <<count;
	return 0;
	
}
