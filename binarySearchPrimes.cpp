#include <iostream>

using namespace std;

bool checkPrime ( const int *a, const int num, const int len);

int main()

{
 int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int num,len;

len= sizeof(primes)/sizeof(primes[0]);

cout<<" Enter a number (1-100) you want to check as a prime :";
cin>>num;

bool idx=checkPrime(primes, num, len);

if (idx)
{
	cout<<"\nYes the number is a prime\n";
}

else
{
	cout<<" \nNumber is not a prime\n";
}

}


bool checkPrime(const int *a, const int num, const int len)

{
	int low,high,mid;
	// int startAdd = a;


	low=0;
	high=len;
	

	while ( low<high)
	{
		
		mid= (low+high)/2;
		// a= startAdd+mid;

		if (num ==  *(a+mid))
			{break;}

		else if (num < *(a+mid))
		{
			high=mid-1;
		}

		else 
		{
			low=mid+1;
		}
	
	}

	if (*(a+mid) == num)
		return true;
	else
		return false;

}

