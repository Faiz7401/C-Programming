#include <stdio.h>

#define maxsize 10

void selection_sort(int [],int);

int main()
{

	int i, num_elements, data[maxsize];


	/*Read in a value for number of elements */

	printf("\nEnter list size: ");
	scanf("%d",&num_elements);

	/*Read in the list of number */
	for(i=0; i<num_elements; i++)
	{
	printf("\nEnter number: ");
		scanf("%d",&data[i]);
	}


	/*Called the selection sort function */
	selection_sort(data, num_elements);

	/*Display the sorted list of number */
printf("\nSorted list for selection sort: ");
	for(i=0; i<num_elements; i++)
	printf(" %d",data[i]);

   return 0;
}


void selection_sort(int data[],int num_elements)
{
	int smallest;
	int a, b, temp;

	for(a=0;a<num_elements; a++)
	{
		smallest = a;
		for(b=a+1;b<num_elements; b++)
		  {	if(data [b]<data[smallest])
			  {	smallest=b; }
        }
			temp=data[a];
			data[a]=data[smallest];
			data[smallest]=temp;
	}


}
