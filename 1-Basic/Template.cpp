# include <iostream>

// Template
template <typename TYPE>
void Print(TYPE arr[],int len)
{
	std::cout << "[";
	
	for(int i =0; i<len-1;i++)
	{
		std::cout << arr[i] << ", ";
	}
	
	if (len != 0)
	{
		std::cout << arr[len-1];
	}
	
	std::cout << "]" << std::endl;
}


int main()
{
	int arr1 [] = {2,3,4,-5,1,1,0,4};
	double arr2 [] = {-2,3.1,4.34};
	float arr3 [] = {-0.2,0.1,0.34};
	char arr4 [] = {'q','w','e','r'};
	
	const int len1 = sizeof arr1 / sizeof arr1[0];
	std::cout << sizeof arr1 << " " << sizeof arr1[0] << std::endl ;
	
	const int len2 = sizeof arr2 / sizeof arr2[0];
	std::cout << sizeof arr2 << " " << sizeof arr2[0] << std::endl ;
	
	const int len3 = sizeof arr3 / sizeof arr3[0];
	std::cout << sizeof arr3 << " " << sizeof arr3[0] << std::endl ;
	
	const int len4 = sizeof arr4 / sizeof arr4[0];
	std::cout << sizeof arr4 << " " << sizeof arr4[0] << std::endl ;
	
	Print(arr1,len1);
	Print(arr2,len2);
	Print(arr3,len3);
	Print(arr4,len4);
	
	return 0;
}



