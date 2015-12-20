#include<iostream>

using namespace std;


//Implement Selection Sort- repeatedly select the next smallest
//element and swap it into place i.e. select an element and find 
//the element in the remaining array that is smaller than that
//Can be thought of having a sorted array and an unsorted array
void swap(int *a, int *b)

{
	int temp= *a;
	*a=*b;
	*b=temp;

}

void SelectionSort( int *arr, const int len);

void displayArray( int *arr);

int main()

{
	int array[] = {18, 6, 66, 44, 9, 22, 14}; 
	const int len= sizeof(array)/sizeof(array[0]);


	

	SelectionSort(array,len);

	displayArray(array);



}

void SelectionSort( int *arr, const int len)
{
	int min,idx;

	for (int i=0; i<len;i++)
	{	
		idx=i;
	

		for( int j=i;j<len;j++)
		{
			if (*(arr+j) < *(arr+idx))
				{	
					idx=j;
				}

		}
		if (*(arr+i) > min)
				{	swap( *(arr+i), *(arr+idx));}
	}
}



void displayArray( int *arr)
{
	cout<<"\nSorted array is:\n";

	while (*arr != '\0')
	{
		cout<<" "<<*arr;
		arr++;
	}
	cout<<endl;
}


