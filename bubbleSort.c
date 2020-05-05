#include<stdio.h>
void bubbleSOrt(int* array,int length )
{
	char flag;
	for(int i=0;i<length-1;i++)
	{
		flag=1;
		for(int j=length-1;j>i;j--)
		{
			if(array[i]<array[j-1])
			{
				array[j]=array[j]^array[j-1];
				array[j-1]=array[j]^array[j-1];
				array[j]=array[j]^array[j-1];
				flag=0;
			}
		}
		if(flag){
			break;
		}
	}
}

