//Anagha Suresh
//CSE(AI)
//Roll no. 09
#include<stdio.h>
void main()
{
	int a[50],i,j,n,temp;
	printf("enter the no. of elements:");
	scanf("%d",&n);
	printf("enter the elements in array"):
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
	printf("the sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
