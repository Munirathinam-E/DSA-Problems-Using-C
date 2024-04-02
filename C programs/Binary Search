#include<stdio.h>
int binary(int arr[],int low,int high,int key)
{
	if(low<high)
	{
	int mid=low+(high-low)/2;
	if(arr[mid]==key)
	return mid+1;
	else if(arr[mid]>key)
	return binary(arr,0,mid-1,key);
	else
	return binary(arr,mid+1,high,key);
   }
   return -1;
}
int main()
{
	int n,i,k,m;
	printf("Enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the key:");
	scanf("%d",&m);
	k=binary(arr,0,n-1,m);
	if(k!=-1)
	printf("the position %d",k);
	else
	printf("not found");
}
