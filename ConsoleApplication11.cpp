

#include <iostream>
using namespace std;
const int limit = 100;
int main()
{
	int num1 , num2;
	cout << "Welcome To Basic Caclulator \n";
	cout << "Enter Your First Numnber \n";   cin >> num1;
	cout << "Enter Your second Numnber \n";  cin >> num2;
	int n; 
	cout << "Enter Operation : \n";
	cout << "1- +   \n";
	cout << "2- -   \n";
	cout << "3- x   \n";
	cout << "4- /   \n";


	cin >> n;
	if (n == 1)
	{
		cout << "result : " << num1 + num2;
	}
	else if (n == 2)
	{
		cout << "result : " << num1 - num2;
	}else if (n == 3)
	{
		cout << "result : " << num1 * num2;
	}else if (n == 4)
	{
		cout << "result : " << num1 / num2;
	}

}


