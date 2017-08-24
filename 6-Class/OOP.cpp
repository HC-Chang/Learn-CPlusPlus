# include <iostream>

// OOP
class Date
{
	public:
		int Day;
		int Month;
		int Year;
		
		void SetDate(int d,int m, int y)
		{
			this->Day = d;
			this->Month = m;
			this->Year = y;
		}
		
		void Print() const
		{
			std::cout << this->Month << "/"
					  << this->Day << "/"
					  << this->Year << std::endl;
		}
		
		
		
		int GetDay() const{return this->Day;}
		
		int GetMonth() const{return this->Month;}

		int GetYear() const{return this->Year;}
		
		
		
		void SetDay(int d) {this->Day = d;}
		
		void SetMonth(int m){this->Month = m;}
		
		void SetYear(int y){this->Year = y;}
		
		
};


int main()
{
	Date dt1;
	Date dt2;
	
	dt1.Day = 10;
	dt1.SetDate(12,5,1993);
	
	std::cout << dt1.Day << std::endl;
	dt1.Print();
	
	dt2.SetDate(10,10,2010);
	dt2.Print();
	
	int m,d,y;
	
	std::cout << "Enter date: ";
	std::cin >> m >> d >> y ;
	
	Date dt3;
	dt3.SetDate(d,m,y);
	
	dt3.Print();
	std::cout << "Month: " << dt3.GetMonth() << std::endl;
	
	
	return 0;
}
