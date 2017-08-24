# include <iostream>
# include <stdexcept>

// Generic catch block
void try_throw_catch(int n)
{
	if(n == 0)
		throw 1;
	if(n == -1)
		throw 'c';
}


int main()
{
	int n;
	std::cout << "Enter number: ";
	std::cin >> n;
	
	try
	{
		try_throw_catch(n);
	}
	catch(...)
	{
		std::cout << "ERROR" << std::endl;
	}
	
	return 0;
}
