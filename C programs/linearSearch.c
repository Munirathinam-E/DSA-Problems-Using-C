#include<stdio.h>
int linearSearch(int arr[],int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		return i+1;
	}
	return -1;
	
}
int main()
{
	int n,i,m;
	printf("Enter the Array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the key:");
	scanf("%d",&m);
	int k=linear(arr,n,m);
	if(k!=-1)
	printf("The position is %d",k);
	else
	printf("not found");
}
