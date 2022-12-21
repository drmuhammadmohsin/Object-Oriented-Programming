#include<iostream>
using namespace std;
#include<string>
int main()
{
string a;
cout<<"Enter your name please"<<endl;
getline(cin, a);
cout<<a[0]<<endl;
cout<<a.size();
return 0;
}
