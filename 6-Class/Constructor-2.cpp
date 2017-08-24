# include <iostream>
# include <string>
# include <stdexcept>

// Class Constructor 2
class Date
{
	int Day;
	int Month;
	int Year;
	
	std::string GetMonthName() const
	{
		static std::string months [] = 
		{
			"January","Feburary","March",
			"April","May","June",
			"July","August","September",
			"October","November","December"
		};
		return months[Month-1];
	}
	
	
	
	public:
		Date(int d, int m, int y)
		{
			this->SetDate(d,m,y);
		}
		
		void SetDate(int d,int m, int y)
		{
			SetDay(d);
			SetMonth(m);
			SetYear(y);
		}
		
		void Print()const
		{
			std::cout << this->Month << "/"
					  << this->Day << "/"
					  << this->Year << std::endl;
		}
		
		void PrintNice() const
		{
			std::cout << Day << " " << GetMonthName()
					  << " " << Year << std::endl;
		}
		
		int GetDay() const{return this->Day;}
		
		int GetMonth() const{return this->Month;}

		int GetYear() const{return this->Year;}
		
		
		
		void SetDay(int d) 
		{
			if( d<0 || d>31 )
				throw std::logic_error("Day out of range!");
			this->Day = d;
		}
		
		void SetMonth(int m)
		{
			if( m<1 || m>12)
				throw std::logic_error("Month must be in [1,12] interval !");
			this->Month = m;
		}
		
		void SetYear(int y)
		{
			if ( y<0)
				throw std::logic_error("Year must be positive !");
			this->Year = y;
		}
};



int main()
{
	Date dt1(1,1,2014);
	Date dt2(dt1);
	
	dt1.PrintNice();
	dt2.PrintNice();
	
	
	return 0;
}
