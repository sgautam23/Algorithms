#include<iostream>

using namespace std;


//Implement Insertion Sort- Insert elements at their right position
//Can be thought of as adding new cards to their new postiions



void swap(int *a, int *b)

{
	int temp= *a;
	*a=*b;
	*b=temp;

}

void InsertionSort( int *arr, const int len);
void displayArray( int *arr);

int main()

{
	int array[] = {18, 6, 66, 44, 9, 22, 14}; 
	const int len= sizeof(array)/sizeof(array[0]);


	InsertionSort(array,len);

	displayArray(array);



}

void InsertionSort( int *arr, const int len)
{
	
	int idx;

	for (int i=0;i<len;i++)

	{	
		int j=i+1,pos=i;
		int key=*(arr+i);
		
		//Checking each new element with preceding elements
		while( j>0)
			{	
				if ( *(arr+j)> key)
					{
						 *(arr+j+1)= *(arr+j);
					}

					else
					{
						pos=j;
					}


				j--;

			}

			*(arr+pos)=key;

			
		

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


