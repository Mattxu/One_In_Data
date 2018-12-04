#include <stdio.h>

int Get_one_in_data(int data)
{
    int n = 0;
	while(data > 0)
	{
	    if(data & 0x01)
		{
		    n++;
		}
		data >>= 1;
	}
	
	return n;
}

int main(void)
{
    int value;
	int count = 0;
	
	printf("Please input Value: \n");
	scanf("%d",&value);
	count = Get_one_in_data(value);
	printf("The number of one in data is: %d\n",count);
	
	return 0;
}
