# include <iostream>

// C++ 11
// lamda function
// an anonymous function
int main()
{
	auto lamda1 = [](int x)
	{
		return x*x*x;
	};
 
	int num = 10;
	int result = lamda1(num);
	std::cout << result << std::endl;
 
 
 
	auto lamda2 = [](int x, int y) -> int
	{
		return x*y;
	};
 
	int result2 = lamda2(10,5);
	std::cout << result2 << std::endl;
 
	return 0;
}
