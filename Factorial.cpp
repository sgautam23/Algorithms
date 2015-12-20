#include <iostream>

using namespace std;

//Simple Program to calulate factorial using recursion

void factorial(int num);

double fact=1;
int main()

{

	int num;
	cout<<"\nEnter Number : ";
	cin>>num;
	factorial(num);
	cout<<"\nFactorial is "<<fact<<"\n";
} 


void factorial(int num)

{

	if (num==1 || num==0)  // If reached 1 then stop calculating, Also 0! is 1
		return;
	else
		{
			fact*=num;
			num--;
			factorial(num);

		}


}