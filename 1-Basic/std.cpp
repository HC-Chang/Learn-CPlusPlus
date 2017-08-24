# include <iostream>
# include <iomanip>

# include <string>

// std::setw
// std::setfill
int main()
{
	std::string s = "apple";
	
	// setw(n)
	// fill left until n
	std:: cout << std::setw(8) << s << "0800" << std::endl;
	
	// setfill('char')
	// fill space as 'char'
	std:: cout << std::setw(8) << std::setfill('0') << s << "0800" << std::endl;
	
	
	// cin
	int i = 0;
	std::cout << "Enter an interger: ";
	std::cin >> i;
	std::cout << "This interger's square: " << i*i << std::endl;
	
	return 0;
}