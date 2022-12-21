#include<iostream>
using namespace std;

 
void       sum (int i,int j )
{
	
cout<<"The sum is :"<<i+j;	
}

void       sub (int i,int j )
{
	
cout<<"The sub is :"<<i-j;	
}
void       mul (int i,int j )
{
	
cout<<"The mul is :"<<i*j;	
}
         
 
int main()
{
   int num1 , num2;
   
   cout<<"enter the first number"<<endl;
   cin>>num1;
   cout<<"enter the second number"<<endl;
   cin>>num2;
   
   cout<<"Press 1 for sum"<<endl;
   cout<<"Press 2 for sub"<<endl;
   cout<<"Press 3 for mul"<<endl;
   
   int choice; 
   cout<<"Please enter your choice"<<endl;
   cin>>choice;
   switch (choice){
   	
   	case 1:
   		sum(num1,num2);
   		break;
   	case 2:
   		sub(num1,num2);
   		break;
   	case 3:
   		mul(num1,num2);
   		break;
   		
   	
}
    return 0;
}
