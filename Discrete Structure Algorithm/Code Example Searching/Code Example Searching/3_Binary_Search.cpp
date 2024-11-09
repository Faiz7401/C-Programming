//Binary Search
#include <stdio.h>
#include <conio.h>
#define maxsize 10

void binary_search(int [],int, int);

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
		for(y=x+1; y<num_elements; y++)
			if(data[x]>data[y])
			{
				temp=data[x];
				data[x]=data[y];
				data[y]=temp;
			}

   /*Display (sorted) the list of numbers entered earlier by user */
	printf("\nSorted list of element entered: ");
	for(i=0; i<num_elements; i++)
		printf(" %d",data[i]);

	/*Read in the key value for binary search */
	printf("\n\nEnter key value for binary search search: ");
	scanf("%d",&search_key);



	/*Called the binary search function */
	binary_search(data, num_elements, search_key);



   getch();
}


void binary_search(int data[],int num_elements, int search_key)
{
	int first=0;
	int last=num_elements - 1;
	int mid;

	while(first<=last)
	{
		mid=(first+last)/2;
	   printf("\nValue for mid: %d",mid);

		if(search_key==data[mid])
			{	printf("\n\nSearch Key found !");
				return;
			}
		else
			if(search_key<data[mid])
				last=mid - 1;
			else
				first=mid + 1;
	}

	printf("\n\nSorry, no match found !");
   return;
}
