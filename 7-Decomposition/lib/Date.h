# ifndef DATE_H
# define DATE_H

# include <iostream>

class Date
{
	int Day;
	int Month;
	int Year;
	
	public:
		void SetDate(int d, int m, int y);
		void Print() const;
		int GetDay() const;
		int GetMonth() const;
		int GetYear() const;
		
	protected:
	
	private:
};

#endif