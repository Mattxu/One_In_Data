#include <stdio.h>

int Get_one_in_data1(int data)
{
    int n = 0;
    for(n = 0; data; n++)
    {
	    data &= (data - 1);
	}
	
	return n;
}

int main(void)
{
    int value;
	int count = 0;
	
	printf("Please input Value: \n");
	scanf("%d",&value);
	count = Get_one_in_data1(value);
	printf("The number of one in data is: %d\n",count);
	
	return 0;
}
