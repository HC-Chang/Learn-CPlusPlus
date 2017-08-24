# include <iostream>

// for loop
int main()
{
	int n =0;
	
	std::cout << "Enter int n: " << std::endl;
	std::cin >> n ;
	
	int sum = 0;
	for(int i = 1; i<= n; i++)
	{
		int number =0;
		std::cout << "Enter: " << i << ". number\t";
		std::cin >> number;
		
		sum += number;
	}
	
	std::cout << "Sum of "<< n << "entered number :\t" << sum << std::endl;
	
	return 0;
}








