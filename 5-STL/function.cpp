# include <iostream>
# include <functional>
# include <cmath>

// function
double Calculate(std::function<double(double)>f,double x);
double Test1(double x);
double Test2(double x);

int main()
{
	double xx = 2;
	double ans1 = Calculate(Test1,xx);
	double ans2 = Calculate(Test2,xx);
	std::cout << "xx : " << xx << std::endl;
	std::cout << "ans1: " << ans1 << std::endl;
	std::cout << "ans2: " << ans2 << std::endl;
	
	// Initialize by lamda
	std::function<int(int,int)> f = [](int a, int b) -> int {return a*b;};
	int res = f(10,20);
	
	std::cout << res << std::endl;
	
	return 0;
}

double Calculate(std::function<double(double)> f, double x)
{
	double y = f(x)*f(x)*f(x);
	return y;
}

double Test1(double x)
{
	return x*x;
}


double Test2(double x)
{
	return x*x-2*x+1;
}
