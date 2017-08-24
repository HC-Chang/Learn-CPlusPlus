# include <iostream>
# include <deque>

// deque
int main()
{
	std::deque<int> dq1(10);
	std::deque<double> dq2(5);
	std::deque<int> dq3;
	std::deque<int> dq4(3,7);
	
	for(int i = 0; i<dq4.size(); i++)
	{
		std::cout << dq4[i] << " ";
	}
	
	int el = dq1.at(0);
	
	bool emp1 = dq2.empty();
	bool emp2 = dq3.empty();
	
	std::cout << std::endl << dq3.size() << std::endl;
	
	// 從後面增加
	dq3.push_back(100);
	std::cout  << dq3.size() << " " << dq3.at(0) << std::endl;
	
	// 從前面增加
	dq3.push_front(50);
	std::cout  << dq3.size() << " " << dq3.at(0) << std::endl;
	
	return 0;
}
