# include "Date.h"



void Date::SetDate(int d, int m, int y)
{
	this->Day = d;
	this->Month = m;
	this->Year = y;
}

void Date::Print() const
{
	std::cout << this->Day << "/"
              << this->Month << "/" 
              << this->Year << std::endl;
} 

int Date::GetDay() const{ return this->Day;}
int Date::GetMonth() const{ return this->Month;}
int Date::GetYear() const{ return this->Year;}