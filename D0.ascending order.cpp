#include<stdio.h>
int main()
{
	int num[100],a,n,i,j;
	
	printf("enter how many elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;j<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
    	{
    		if(num[j]>num[j+1])
    		{
    			a=num[j];
    			num[j]=num[j+1];
    			num[j+1]=a;
        	}
        }
    } 
    for(i=0;i<n;i++)
    {
    	printf("ascending order %d\n",num[i]);
    }
    for(i=n-1;i>=0;i--)
    {
    	printf("descending order %d\n",num[i]);
    }
}