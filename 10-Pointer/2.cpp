# include <iostream>

using namespace std;

// pointer - 2
void method1();
void method2();

int main()
{
	cout << "method1 :\n";
	method1();

	cout << "\n\nmethod2 :\n";
	method2();
	
	return 0;
}

void method1()
{
	int a[7] = {1,2,3,4,5,6,7};
	int *p_a = a;
	
	for(int i = 0; i<7; i++)
	{
		cout << *p_a << " " ;
		p_a++;
	}
}

void method2()
{
	int a[7] = {1,2,3,4,5,6,7};
	int *p_a = &a[6];
	
	for(int i = 0; i<7; i++)
	{
		cout << *p_a << " ";
		p_a--;
	}
}