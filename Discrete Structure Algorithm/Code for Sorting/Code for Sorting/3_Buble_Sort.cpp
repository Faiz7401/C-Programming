/*Bubble Sort*/

#include <stdio.h>
#include <conio.h>
#define maxsize 10

void bubble_sort(int [],int);

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
	bubble_sort(data, num_elements);

	/*Display the sorted list of number */
	printf("\nSorted list for selection sort: ");
	for(i=0; i<num_elements; i++)
		printf(" %d",data[i]);

      getch();
}


void bubble_sort(int data[],int num_elements)
{

	int  temp, i;

	while (num_elements>1)
	{

		num_elements--;

		for(i=0;i<num_elements;i++)
		{

			if (data[i]>data[i+1])
			{
				temp=data[i];
				data[i]=data[i+1];
				data[i+1]=temp;

			}
		}

	}
}
