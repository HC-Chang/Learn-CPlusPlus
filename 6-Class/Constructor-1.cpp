# include <iostream>

// Class Constructor 1
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
};

int main()
{
	DummyClass dummy1;
	dummy1.Print();
	
	std::cout << "\n";
	
	DummyClass dummy2(7);
	dummy2.Print();
	
	return 0;
}
