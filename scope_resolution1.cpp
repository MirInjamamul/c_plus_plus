//To Access a global variable when there is a local variable with same name

#include<iostream>
using namespace std;

int x; //global variable

int main()
{

	int x = 10; //local variable
	cout<< "Value of global x is " << ::x <<endl;
	cout<< "Value of local x is " << x <<endl; 
	return 0;
}
