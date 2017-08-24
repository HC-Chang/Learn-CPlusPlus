#include <iostream>

# define PI 3.14

//  define & declare
int main()
{
	// define PI
	std::cout << PI << std::endl;
	
	// declare
	int var1 = 10;
	int var2(100);
	
	std::cout << "var1: " << var1 << std::endl;
	std::cout << "var2: " << var2 << std::endl;
	
	// C++11 or C++14
	// C++98 is not available
	 int var3{20};
	 std::cout << "var3: " << var3 << std::endl;
	
	return 0;
}