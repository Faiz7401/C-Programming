//Linear Sequential Search
#include <stdio.h>
#include <conio.h>
#define MAXSIZE 10

void seq_search(int [],int,int);

int main()
{
	int x, index;
	int i, num_elements, data[MAXSIZE];
	int search_key;


	/*Read in a value for number of elements */

	printf("\nHow many number you want to enter: ");
	scanf("%d",&num_elements);

	/*Read in the list of number */
	for(x=0; x<num_elements; x++)
	{
		printf("\nEnter number: ");
		scanf("%d",&data[x]);
	}

	/*Read in the search_key for linear sequential search */

	printf("\nEnter key value for linear sequential search:");
	scanf("%d",&search_key);

	/*Linear sequential search for element */
	seq_search(data, num_elements, search_key); //function for linear seq search

	/*Display the list of numbers entered earlier by user */
	printf("\nList of element entered: ");

	for(i=0; i<num_elements; i++)
		printf("  %d",data[i]);

      getch();
      return 0;
}


void seq_search(int data[],int num_elements, int search_key)
{
	int i;

	for(i=0;i<num_elements;i++)
	{
		if(data[i]==search_key)
		{
			printf("\nSearch Key found !");
			return;
		}
	}

	printf("\nSorry, no match found");
	return;
}
