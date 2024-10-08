// Варіант 25(Ітераційний код)
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* t, const int size, const int A, const int B)
{
	for(int i=0; i < size; i++)
		t[i] = A + rand() % (B - A + 1);
}
void Print(int* t, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << t[i];
	cout << endl;
}
int Sum(const int* const t, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (t[i] < 0 && i % 3 != 0)
			S += t[i];
	return S;
}
int Count(const int* const t, const int size)
{
	int a = 0;
	for (int i = 0; i < size; i++)
		if (t[i] < 0 && i % 3 != 0)
			a++;
	return a;
}
void Replacement(int t[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (t[i] < 0 && i % 3 != 0)
			t[i] = 0;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int t[n];
	int A = -11;
	int B = 13;
	Create(t, n, A, B);
	Print(t, n);
	cout << "The sum of the elements that satisfy the condition = " << Sum(t, n) << endl;
	cout << "The number of elements that satisfy the condition = " << Count(t, n) << endl;
	Replacement(t, n);
	Print(t, n);
	return 0;
}


