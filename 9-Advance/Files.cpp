# include <iostream>

# include <fstream>
# include <string>

void StreamWrite();
void FileExist();

// Files
int main()
{
	StreamWrite();
	
	FileExist();
	
	return 0;
}

void StreamWrite()
{
	// Stream Write
	std::string s;
	std::cout << "Enter some text: ";
	std::getline(std::cin,s);
	
	int n ;
	std::cout << "Enter number n: ";
	std::cin >> n;
	
	std::ofstream sw("SW.txt");
	
	for(int i = 0; i<n; i++)
	{
		sw << s << std::endl;
	}
	
	sw.close();
}

void FileExist()
{
	std::ofstream sr("FileExist.txt",std::ios::app);
	
	if(!sr)
	{
		std::cout << "File does not exist or you do not have a permission to write it.";
	}
	else
	{
		sr << "Hey" << std::endl;
	}
	
	
	sr.close();
}