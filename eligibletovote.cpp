#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "\n enter your age :";
	cin>> age;
	
	if(age>=18)
	{
		cout<< "\n \n you are eligible to vote";
	}
	else
	{
		cout<< "\n \n you are not eligilbe to vote.";
	}
	return 0;
}

