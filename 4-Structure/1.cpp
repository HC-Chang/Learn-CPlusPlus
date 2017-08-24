# include <iostream>
# include <string>

// Initialize Structre
// static attributes
struct Date
{
	int day;
	int month;
	int year;
};

struct Book
{
	int ID;
	std::string Name;
	std::string Author;
	Date Published;
	
	// Count will share with b1 & b2
	static int Count;
};

// Declare static variable - Count
int Book::Count;

int main()
{
	Book b1,b2;
	
	b1.ID = 0;
	b1.Name = "Apple";
	b1.Author = "User";
	b1.Count = 10;
	
	std::cout << b2.Count<<std::endl;
	
	b2.Count = 100;
	std::cout << b1.Count<<std::endl;
	
	Book::Count = 1000;
	std::cout << b1.Count<<std::endl;
	
	return 0;
}
