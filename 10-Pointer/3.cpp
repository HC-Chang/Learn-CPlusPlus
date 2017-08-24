# include <iostream>

using namespace std;

// pointer - 3
void method1();
void method2();
void method3();

int main()
{
	method1();
	
	cout << "\n";
	
	method2();
	
	cout << "\n";
	
	method3();
	
	return 0;
}

void method1()
{
	double x = 3.14;
	double y = 2.71;
	double *p1 = &x;
	double *p2 = &y;
	
	cout << "This is p for x = " << *p1 << endl;	
	cout << "This is p for y = " << *p2 << endl;
	
	p1 = p2;
	cout << "This is p for x = " << *p1 << endl;
}



void method2()
{
	int x = 7;
	double y = 6.21;
	int *p1 = &x;
	double *p2 = &y;
	
	*p1 = *p2;
	cout << *p1 << endl;
}



void method3()
{
	int *p;
	int x = 7;
	p = &x;
	
	cout << "This is p = " << p << endl;
	cout << "This is *p = " << *p << endl;
	cout << "This is x = " << x << endl;
	
	*p = 100;
	
	cout << "This is p = " << p << endl;
	cout << "This is *p = " << *p << endl;
	cout << "This is x = " << x << endl;
	
	x = 10;
	cout << "This is p = " << p << endl;
	cout << "This is *p = " << *p << endl;
	cout << "This is x = " << x << endl;
}