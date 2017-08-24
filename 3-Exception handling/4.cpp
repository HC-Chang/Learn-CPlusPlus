# include <iostream>
# include <stdexcept>

// Standard exceptions
int main()
{
	// All types of Error
	/*
	std::logic_error
	std::domain_error
	std::invalid_error
	std::length_error
	std::out_of_error
	std::range_error
	std::overflow_error
	std::underflow_error
	*/
	
	catch(std::range_error re)
	{
		std::cout < "ERRPR: " << re.what();
	}
	return 0;
}
