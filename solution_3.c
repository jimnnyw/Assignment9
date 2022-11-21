 #include <stdio.h>
 
 int main()
 {
 	int arr[100] = {};
 	int n = 0;
 	printf("arr size: \n");
 	scanf("%d", &n);
 	
 	printf("arr[]: \n");
 	for(int i = 0; i < n; i++)
 	{
 	printf("Enter number: \n");
 	scanf("%d", &arr[i]);
 	}
 	//scanf("%d %d %d", &arr, &arr[1], &arr[]); 
 	
 	printf("AND Pairs: \n");
 	for(int i = 0; i < n; i++)
 	{
 		for(int j = 0; j < n; j++)
 		{

 		if((arr[i] & arr[j]) & 1)
 			{ 
 				if(arr[i] == arr[j]) continue;
 				printf("Pair AND: (%d, %d)\n", arr[i], arr[j]);
 			}
 		}
 	}
 	
 	printf("OR Pairs: \n");
 	for(int i = 0; i < n; i++)
 	{
 		for(int j = 0; j < n; j++)
 		{

 		if((arr[i] | arr[j]) & 1)
 			{ 
 				if(arr[i] == arr[j]) continue;
 				printf("Pair OR: (%d, %d)\n", arr[i], arr[j]);
 			}
 		}
 	}
 	
 	 	
 	printf("XOR Pairs: \n");
 	for(int i = 0; i < n; i++)
 	{
 		for(int j = 0; j < n; j++)
 		{

 		if((arr[i] ^ arr[j]) & 1)
 			{ 
 				if(arr[i] == arr[j]) continue;
 				printf("Pair XOR: (%d, %d)\n", arr[i], arr[j]);
 			}
 		}
 	}
 
 
 }
