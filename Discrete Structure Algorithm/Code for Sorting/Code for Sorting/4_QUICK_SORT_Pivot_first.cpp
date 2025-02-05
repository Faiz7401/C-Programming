/*Quick Sort Programming	*/

#include <stdio.h>
#include <conio.h>
#define maxsize 10

void quickSort(int [],int,int);
int partition(int [],int,int);
void swap(int [],int,int);

int main()
{

	int i, num_elements, data[maxsize];


	/*Read in a value for number of elements */

	printf("\nHow many number you want to enter: ");
	scanf("%d",&num_elements);

	/*Read in the list of number */
	for(i=0; i<num_elements; i++)
	{
		printf("\nEnter number: ");
		scanf("%d",&data[i]);
	}

	/*Called the quickSort function */
	quickSort(data,0,num_elements-1);

	/*Display the sorted list of number */
	printf("\nSorted list for selection sort: ");
	for(i=0; i<num_elements; i++)
		printf(" %d",data[i]);

   getch();
   return 0;
}


void quickSort(int data[],int first,int last)
{
	int pivotLocation;

	if(first<last)
	{
      pivotLocation=partition(data,first,last);
      quickSort(data,first,pivotLocation-1);
      quickSort(data,pivotLocation+1,last);
	}

}

int partition(int data[],int first,int last)
{
	int pivot,index,pivotLocation;

	pivot = data[first];
	pivotLocation=first;

	for(index=first+1;index<=last;index++)
	 {	if(data[index]<pivot)
		{
			pivotLocation++;
			swap(data,pivotLocation,index);
		}
    }
	swap(data,first,pivotLocation);



	return pivotLocation;
}


void swap(int data[],int first,int second)
{
	int temp;
	temp=data[first];
	data[first]=data[second];
	data[second]=temp;
}
