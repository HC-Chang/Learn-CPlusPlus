# include <iostream>

using namespace std;

// pointer - 1
void Basic();
void Operate1();
void Operate2();
void Operate3();

// pointer
int main()
{
	cout << "Basic :\n";
	
	Basic();
	
	cout << "\nOperate1 :\n";
	
	Operate1();
	
	cout << "\nOperate2 :\n";
	
	Operate2();
	
	cout << "\n\nOperate3 :\n";
	
	Operate3();
	
	cout << "\n\n";
	
	return 0;
}

// Basic
void Basic()
{
	int *p;
	int x;
	p = &x;
	
	x = 100;
	
	cout << "Print *p: " << *p << endl;
}

// Operate - 1
void Operate1()
{
	double a[7] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double *p;
	double *q;
		
	p = &a[0];
	q = &a[7];
	
	for(int i = 0; i<7; i++)
	{
		cout << *p++ << endl;
	}
	
	cout << endl << *p <<endl;
}

// Operate - 2
void Operate2()
{
	double a[7] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double *p;
	double *q;
		
	p = &a[0];
	q = &a[7];
	
	while(p<q)
	{
		cout << *p++ << " ";
	}
}

void Operate3()
{
	double a[7] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double *p;
	double *q;
		
	p = &a[0];
	q = &a[7];
	
	while(q>=p)
	{
		cout << *q-- << " ";
	}
}