#include<iostream>
using namespace std;

int main()
{
	int a,b,e;
	int c;
	
	cout << endl;
	
	cout << "This is a multiplcation and add program\n";
	
	cout << "Push a into this program\n";
	cin >> a;
	
	cout << "Push b into this program\n";
	cin >> b;
	
	cout << endl;
	
	cout << "push 1 if you want adding\n";
	cout << "push 2 if you want multiplying\n";
	cin >> e;
	
	cout << endl;
	
    if(e>1)
	
	{c=a*b;
	}
	
	if(e<2)
	{c=a+b;
	}
	
	cout << "This is the calculate result\n";
	cout << c;

	return 0;
}