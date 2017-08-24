# include <iostream>
# include <cmath>
# include <stdexcept>

// Exception Handling
// try - catch - 1
double Sqrt(double x)
{
	if(x<0)
	{
		throw "Nagetive number!";
	}
	double sroot = std::pow(x,0.5);
	return sroot;
}



int main()
{
	double num;
	
	std::cout << "Enter number: ";
	std::cin >> num;
	
	double square_root;
	
	try
	{
		square_root = Sqrt(num);
	}
	catch(const char *text)
	{
		std::cout << "Error: " << text << std::endl;
		return 1;
	}
	
	std::cout << "Sqrt (" << square_root << ") = " << square_root << std::endl;
	return 0;
}
