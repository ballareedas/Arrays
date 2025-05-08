#include<stdio.h>
int main()
{
	//int arr[6]={2,8,6,5,9,4};
	int arr[6]={5,2,2,2,3,2};
	int n, c=0,i;
	printf("enter the number to be counted for: ");
	scanf("%d",&n);
	printf("Elements are: \n");
	for(i=0; i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	//for(i=0;i<6;i++)
	for(i=0;i<5;i++)
	{
		if(n>=arr[i])
		{
		    c+= 2*(i+1);
       	}
		else
		{   while(arr[i]>0)
			{
			c+= 2*(i+1);
			arr[i]=arr[i]-n;
		}
		}
	}
	if(n>=arr[i])
	c+=i+1;
	else
		{   while(arr[i]>n)
			{
			c+= 2*(i+1);
			arr[i]=arr[i]-n;
		}
		c+=i+1;
		}
	
	printf("the count is: %d",c);
	return 0;
}
