/*Quick Sort */

#include <stdio.h>
#include <conio.h>

#define maxsize 10

void quick_sort(int [],int,int);

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
	quick_sort(data, 0,num_elements-1);

	/*Display the sorted list of number */
	printf("\nSorted list for selection sort: ");
	for(i=0; i<num_elements; i++)
		printf(" %d",data[i]);

      getch();
      return 0;
}


void quick_sort(int data[],int bottom,int top)
{
	int left, right,temp, pivot,flag;
	if(top>bottom)
	{
		pivot=data[top];
		right=top;
		left=bottom-1;
		do
		{
			flag=1;
			while(data[++left]<pivot);
			while(data[--right]>pivot);
			if(left<right)
			{
				temp=data[left];
				data[left]=data[right];
				data[right]=temp;
			}

			else
			{
				break;
			}

		}while(flag>0);
		temp=data[left];
		data[left]=data[top];
		data[top]=temp;

		quick_sort(data,bottom,left-1);
		quick_sort(data,left+1,top);
	}

}
