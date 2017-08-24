# include <iostream>

// C++11
// for each loop
int main()
{
	int arr[] = {5,4,1,2,3,-2}; 
	double arr2[] = {1.1,2.2,6.1,3.5};
	
	int i = 0;
	for(i:arr)
		std::cout << i << std::endl ;
	
	
	
	double d = 0;
	for(d:arr2)
		std::cout << d << std::endl ;
	

	// need C++11
	// auto a = 0;
	// for(auto a : arr2)
	//	std::cout << a << std::endl ;

	
	
	return 0;
}
