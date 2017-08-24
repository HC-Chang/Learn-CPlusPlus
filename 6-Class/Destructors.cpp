# include <iostream>
# include <string>
# include <stdexcept>

// Destructors
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
		
		// Destructor
		~DummyClass()
		{
			std::cout << "Destructor has been called !" << std::endl;
		}
};
		



int main()
{
	DummyClass dm1;
	
	{
		DummyClass dm2;
	}

	std::cout << "Hello" << std::endl;
	
	return 0;
}
