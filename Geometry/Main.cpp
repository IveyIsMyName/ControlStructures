#include <iostream>
using namespace std;

//#define TASK0
//#define TASK1
//#define TASK2
//#define TASK3
//#define TASK4
//#define TASK6

void main()
{
	setlocale(LC_ALL, "");
	
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	
#ifdef TASK0
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
#endif // TASK0

#ifdef TASK1
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; i > j; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
#endif // TASK1

#ifdef TASK2
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; i + j <= n - 1; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
#endif // TASK2

#ifdef TASK3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j >= i)
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
#endif // TASK3

#ifdef TASK4
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j >= n - 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
#endif // TASK4

#ifdef TASK6
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2)
				cout << '+';
			else
				cout << '-';
		}
		cout << endl;
	}
#endif // TASK6

}