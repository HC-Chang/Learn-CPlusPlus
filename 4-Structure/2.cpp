# include <iostream>
# include <string>

// Structre
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
	Date d1 = {10,10,2016};
	Date d2 = {11,11,2011};
	
	Book b1 = {0,"Name","Unknow",d1};
	
	Book books[100];
	books[0];
	
	books[2].ID = 10;
	
	books[14].Author = "Apple";
	
	std::cout << b1.Published.year << std::endl;
	std::cout << books[2].ID << std::endl;
	std::cout << books[14].Author << std::endl;
	
	return 0;
}
