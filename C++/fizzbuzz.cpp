#include <iostream>
using namespace std;
int main()
{
	bool printed = false;
	for(int i = 1; i <= 100; i++) 
	{
			if(i % 3 == 0) 
			{
				cout<<"Fizz";
				printed = true;
			}
			if(i % 5 == 0) 
			{
				cout<<"Buzz";
				printed = true;
			}
			if(printed == false) 
			{
				cout<<i;
			}
			cout<<endl;
			printed = false;
	}
}