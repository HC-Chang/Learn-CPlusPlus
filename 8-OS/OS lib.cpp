# include <iostream>

# include <windows.h>

int main()
{
	std::cout << "We've got 'SW_SHOW' constant: " << SW_SHOW << std::endl;
	std::cout << GetLastError() << std::endl;
	
	std::cout << "\n";
	
	DWORD ms = GetTickCount();
	std::cout << "Milliseconds passed after computer started: " << ms << std::endl; 
	
	unsigned int hours = ms / 3600000;
	unsigned int minutes = (ms / 60000) %60 ;
	unsigned int seconds = (ms/1000)% 60;
	
	std::cout << "And that is " << hours << "h, " << minutes << "m and " << seconds << "s" << std::endl;
	
	return 0;
}

/*
<advapi.h>
<windows.h>
*/