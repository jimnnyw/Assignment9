#include <stdio.h>

int main()
{
	int n = 4;
	int arr[5] = { 1, 2, 3, 4, 4 };
	
	for (int i = 0; i < n; i++)
	{
		//printf("i=%d, %d\n", i, (arr[i] ^ (arr[i+1])));
		if((arr[i] ^ (arr[i + 1])) == 0) printf("The repeating number: %d\n", i+1);
	} 
	return 0;
}
