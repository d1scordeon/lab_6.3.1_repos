#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print1(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}

void Print2(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "b[" << setw(2) << i << " ] = " << setw(4) << b[i] << endl;
	cout << endl;
}

int Mul(int* a, const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
		c += a[i] * a[i];
	return c;
}
int Mul1(int* b, const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
		c += b[i] * b[i];
	return c;
}
int Sum(int* a, int* b, const int size) 
{
	int S = 0;
	for (int i = 0; i < size; i++)
		S += (a[i] * a[i]) + (b[i] * b[i]);
	return S;
}
int main()
{
	srand((unsigned)time(NULL)); 

	const int n = 1;
	int a[n], b[n];
	int Low = -20;
	int High = 50;

	Create(a, n, Low, High);
	Print1(a, n);
	Create(b, n, Low, High);
	Print2(b, n);

	cout << "a*a= " << Mul(a, n) << endl;
	cout << "b*b= " << Mul(b, n) << endl;
	cout << "sum = " << Sum(a, b, n) << endl;

	return 0;
}