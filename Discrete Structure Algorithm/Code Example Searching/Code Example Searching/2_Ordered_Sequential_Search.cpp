//Ordered Sequential Search
#include <stdio.h>
#include <conio.h>
#define maxsize 100

void orderseq_search(int [],int, int);

int main()
{
	int x,y,temp;
	int i, num_elements, data[maxsize];
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



	/*Sort list in ascending order*/
	for(x=0; x<num_elements;x++)
	  {	for(y=x+1; y<num_elements; y++)
		 	{	if(data[x]>data[y])
				{
				temp=data[x];
				data[x]=data[y];
				data[y]=temp;
				}
       	}
     }

   /*Display (sorted) the list of numbers entered earlier by user */
	printf("\nSorted list of element entered: ");
	for(i=0; i<num_elements; i++)
		printf(" %d",data[i]);

	/*Read in the key value for ordered Sequential search */
	printf("\n\nEnter key value for ordered sequential search: ");
	scanf("%d",&search_key);

	/*order sequential search for element */
	orderseq_search(data, num_elements, search_key);

      getch();
      return 0;
}


void orderseq_search(int data[],int num_elements, int search_key)
{
	int i;
	i=num_elements-1;

	while(i>=0)
	{
		if(data[i] == search_key)
		{
			printf("\nSearch Key found !");
			return;
		}

		else if(data[i]<search_key)  //terminate the search if the data item < search_key
		{
			printf("\nSorry, no match found");
			return;
		}
			i--; //reduce the size of array for searching
	}

	printf("\nSorry, no match found.");
	return ;

}
