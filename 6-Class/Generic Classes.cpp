# include <iostream>
# include <string>
# include <stdexcept>

// Generic Classes
template <typename TYPE>
class DummyGeneric
{
	TYPE Attributes;
	
	public:
		DummyGeneric(TYPE Param) : Attributes(Param)
		{
			
		}
		
		TYPE GetAttribute() const
		{
			return this->Attributes;
		}
		
		void SetAttribute(TYPE a)
		{
			this->Attributes = a;
		}
		
		void Print()
		{
			std::cout << this->Attributes << std::endl;
		}
};


int main()
{
	DummyGeneric<int> dummy_int(10);
	DummyGeneric<double> dummy_double(10.99);
	DummyGeneric<char> dummy_char('E');
	
	dummy_int.Print();
	dummy_double.Print();
	dummy_char.Print();
	
	dummy_char.SetAttribute('P');
	
	dummy_char.Print();

	return 0;
}
