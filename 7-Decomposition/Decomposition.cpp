# include <string>
# include <stdexcept>

// Example execute
// # include "lib/Date.h"

// Real execute
# include "lib/Date.cpp"

// Decomposition
int main()
{
	Date dt1;
	
	dt1.SetDate(10,10,2010);
	dt1.Print();

	return 0;
}
