# include <iostream>
# include <cmath>

// do - while
int main()
{
	int n = 0;
	
	do
	{
		std::cout << "Enter a natural number n : " ;
		std::cin >> n ;
		
	}
	while( n <= 0 );
	
	
	double sqrt_n = std::sqrt(n);
	
	std::cout << "sqrt ( "<< n << " ) = " << sqrt_n << std::endl;
	
	return 0;
}
