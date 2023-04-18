#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<temp)
			{
				arr[j+1]=temp;
				break;
			}
			else
			{
				arr[j+1]=arr[j];
			}
		}
		if(j==-1)
		{
			arr[0]=temp;
		}
	}
}
int main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
