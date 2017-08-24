# include <iostream>
# include <string>
# include <map>

// map
int main()
{
	std::map<int, std::string> numbers;
	
	numbers[0] = "Zero";
	numbers[1] = "One";
	numbers[2] = "Two";
	
	std::cout << numbers.at(0) << std::endl;
	std::cout << numbers.size() << std::endl;	
	bool emp = numbers.empty();
	
	auto it1 = numbers.find(2);
	// crash
	// it1 = numbers.find(3);
	auto it2 = 10;
	
	if(it1 == numbers.end())
	{
		std::cout << "Key not found! " << numbers.at(3) << std::endl << std::endl;
	}
	else
	{
		std::cout << "Key found! Value: " << std::endl << std::endl;
	}
	
	std::map<int,std::string> Days
	{
		{1,"Monday"},
		{2,"Tuesday"},
		{3,"Wednesday"},
		{4,"Thusday"},
		{5,"Friday"},
		{6,"Saturday"},
		{7,"Sunday"}
	};

	for(int i = 1; i<=7; i++)
	{
		std::cout << Days[i] << std::endl;
	}
	
	
	return 0;
}
