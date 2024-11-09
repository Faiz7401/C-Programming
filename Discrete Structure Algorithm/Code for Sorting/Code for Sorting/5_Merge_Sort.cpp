/*Merge Sort Programming	*/

#include <stdio.h>
#define maxsize 10

void mergeSort(int [],int,int);
void mergeList(int [],int,int,int);


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

	/*Called the mergeSort function */
	mergeSort(data,0,num_elements-1);

	/*Display the sorted list of number */
	printf("\nSorted list for selection sort: ");
	for(i=0; i<num_elements; i++)
		printf(" %d",data[i]);

   return 0;
}


void mergeSort(int data[],int first,int last)
{
	int middle;

	if(first<last)
	{
		middle=(first+last)/2;
		mergeSort(data,first,middle);
		mergeSort(data,middle+1,last);
		mergeList(data,first,middle,last);
	}

   return;
}

void mergeList(int data[],int first,int middle,int last)
{  int i,L,R,count,temp[maxsize];
	L=first;
	count=first;
	R=middle+1;

	while((L<=middle)&&(R<=last))
	{
      if(data[L]<=data[R])
		{  temp[count]=data[L];
			L++;
		}
		else
		{  temp[count]=data[R];
			R++;
		}
		count++;
	}

	if(L>middle)
	{
		for(i=R;i<=last;i++)
		{  temp[count]=data[i];
			count++;
		}
	}
	else
	{
		for(i=L;i<=middle;i++)
		{  temp[count]=data[i];
			count++;
		}
	}

	for(i=first;i<=last;i++)
	{     data[i]=temp[i];
	}
}


