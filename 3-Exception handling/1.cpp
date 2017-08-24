# include <iostream>
# include <cmath>

// Exception Handling
// throw
double Sqrt(double x)
{
	if(x<0)
	{
		throw "Negative number!";
	}
	return std::pow(x,0.5);
}



int main()
{
	double square_root = Sqrt(-10);
	std::cout << "Sqrt (" << square_root << ") = " << square_root << std::endl;
	return 0;
}
