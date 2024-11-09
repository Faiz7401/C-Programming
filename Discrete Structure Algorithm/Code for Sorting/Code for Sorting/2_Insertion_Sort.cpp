#include <stdio.h>
#define maxsize 10

void insertion_sort(int [],int);

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


	/*Called the selection sort function */
	insertion_sort(data, num_elements);

	/*Display the sorted list of number */
	printf("\nSorted list for selection sort: ");
	for(i=0; i<num_elements; i++)
		printf(" %d",data[i]);

      return 0;
}


void insertion_sort(int data[],int num_elements)
{

	int a, b, temp;

	for(a=1;a<num_elements; a++)
	{
		temp=data[a];
		b=a-1;


		while((temp<data[b])&&(b>=0))
		{
			data[b+1]=data[b];
			b--;
		}

		data[b+1] =temp;
	}


}
