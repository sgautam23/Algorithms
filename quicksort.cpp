
#include<iostream>

using namespace std;


//Implement Quick Sort- Select a pivot (usually the middle element)
// partition the array such that elements to the left of the pivot are less than the pivot
//, elements to the right are greater
// Call Quicksort recursively on partitioned arrays
void swap(int *a, int *b)

{
	int temp= *a;
	*a=*b;
	*b=temp;

}

void quickSort( int* arr, int left, int right);

void displayArray( int *arr,int len);
//typedef
int main()

{
	// int array[] = {18, 6, 22, 44, 9, 22, 14};  //Usual Test Case

	int array[] = {18, 6, 22, 2244, 0, 22, 14};  //Starting Pivot is the highest element

	// int array[] = {1, 1, 1, 1, 1, 1, 1};   //All Elements are same

	// int array[] = {182, 62, 22, 4, 2, 1, -1};   //Negative elements, Decending array

	// int array[] = {2, 6, 22, 44, 94, 122, 144};  //Ascending array

	const int len= sizeof(array)/sizeof(array[0]);
	

	int left=0;
	int right=len-1;
	

	quickSort(array, left, right);

	displayArray(array,len);



}


void quickSort( int *arr, int left, int right)
{
	//displayArray( arr);
	int i=left,j=right;
	int pivot= arr[(left + right) / 2];

	while (i<=j) //Partitioning Step
	{	//displayArray( arr);
		while (arr[i]<pivot)		//Find elements greater than pivot
			i++;					
		while (arr[j] >pivot)		//Find elements less than pivot
			j--;

		if(i<=j)
			{	
				//cout << i << " " << j << endl;
				swap(arr[i],arr[j]);
				  
				i++;
				j--;
			}

			
	}

	if(left<j)
		{	quickSort(arr, left,j);   // Call Quicksort on sorted arrays

	}
	if(i<right)
		{quickSort(arr,i,right);}

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


