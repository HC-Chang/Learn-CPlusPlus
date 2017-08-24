# include <iostream>
# include <string>
# include <stdexcept>

// Friend Function
class DummyClass
{
	// Private Attributes
	int attr1;
	char attr2;
	
	public:
	
		// Constructor 1
		DummyClass() : attr1(0),attr2('E')
		{
			std::cout << "Hello! Constructor here !!!" << std::endl;
		}
		
		// Constructor 2
		DummyClass(int param) : attr1(param),attr2('P')
		{
			std::cout << "2nd Constructor here. Param = " << param << std::endl;
		}
	

	
		// Method
		void Print() const
		{
			std::cout << "attr1 = " << attr1 << std::endl;
			std::cout << "attr2 = " << attr2 << std::endl;
		}
		
		// Friend Function
		// Between the same father class
		friend int Add(DummyClass dc1, DummyClass dc2)
		{
			int result;
			result = dc1.attr1 + dc2.attr1;
			return result;
		}
		
		// Destructor
		~DummyClass()
		{
			std::cout << "Destructor has been called !" << std::endl;
		}
};
		



int main()
{
	DummyClass dm1(100);
	DummyClass dm2(200);
	
	std::cout << "\n";
	
	int res = Add(dm1,dm2);
	std::cout << res << std::endl;

	std::cout << "\n";
	
	return 0;
}
