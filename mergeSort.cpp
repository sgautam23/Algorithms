
#include<iostream>

using namespace std;
typedef int datatype;

//Implement Merge Sort- repeatedly select the next smallest
//element and swap it into place i.e. select an element and find 
//the element in the remaining array that is smaller than that
//Can be thought of having a sorted array and an unsorted array
void swap(int *a, int *b)

{
	int temp= *a;
	*a=*b;
	*b=temp;

}

void mergeSort( int* arr, int left, int right);
void merge( int *arr, int p, int mid, int r);

void displayArray( int *arr,int len);

int main()

{
	// int array[] = {18, 6, 22, 44, 9, 22, 14};  //Usual Test Case

	int array[] = {18, 6, 22, 2244, 0, 22, 14};  //Duplicate Values

	// int array[] = {1, 1, 1, 1, 1, 1, 1};   //All Elements are same

	// int array[] = {182, 62, 22, 4, 2, 1, -1};   //Negative elements, Decending array

	// int array[] = {2, 6, 22, 44, 94, 122, 144};  //Ascending array

	const int len= sizeof(array)/sizeof(array[0]);
	

	int p=0;
	int r=len-1;
	
	//displayArray(array,len);

	mergeSort(array, p, r);

	displayArray(array,len);



}




void merge (int *arr, int p, int mid, int r)
{

	///displayArray(arr,r-p);
	int i=p,j=mid+1;
	int sorted[50];
	// int k=p;
	int k=0;

	while((i<mid+1) && (j<=r))
		{ if (arr[i]<=arr[j])
			{

				sorted[k]=arr[i];
				i++;
				k++;
			}

			else 
			{
				sorted[k]=arr[j];
				j++;
				k++;
			}

		}

		if(i==mid+1)
			{ while(j<=r)
				{
					sorted[k]=arr[j];
					k++;
					j++;
				}
			}
			if(j==r)
				{ while(i<=mid)
					{
						sorted[k]=arr[i];
						k++;
						i++;
					}
				}		

				
				for( int k=p;k<=r;k++)
					{	arr[k]=sorted[k];}

			}

			void mergeSort( int *arr, int p, int r)
			{	

				if(p<r)
				{
					int mid=(p+r)/2;

				//cout<<p<<" "<<r<<endl;
	//displayArray(arr,r-p);

					mergeSort( arr, p, mid);
					mergeSort( arr,mid+1,r);

					merge(arr, p, mid, r);


				}
			}


			void displayArray( int *arr,int len)
			{
				cout<<"\nSorted array is:\n";

				for(int i=0;i<len;i++)
				{
					cout<<" "<<*arr;
					arr++;
				}
				cout<<endl;
			}


