# include <iostream>

typedef char* string;

// array
int main()
{
	int 	arr1[10];
	
	arr1[0] = 5;
	arr1[4] = 10;
	arr1[9] = 100;
	
	int 	arr2[5] = {1,2,7,5,4};
	int 	arr3[3] = {0};
	
	for(int i = 0; i<5; i++)
	{
		std::cout << arr2[i] << std::endl;
	}

	std::cout << std::endl;
	
	for(int i = 0; i<3; i++)
	{
		std::cout << arr3[i] << std::endl;
	}
	
	
	// int NUM = 2;
	# define SIZE 3
	const int NUM = 2;
	int arr4 [NUM] = {0};
	int arr5 [SIZE] = {0};
	
	// float 	arr[3];
	// arr[3] = 11;
	
	return 0;
}

// continue

// goto VAR:
// VAR: