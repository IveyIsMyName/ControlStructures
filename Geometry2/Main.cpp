#include <iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB_1
//#define ROMB_2
//#define ROMB_3


void main()
{
	setlocale(LC_ALL, "");


#ifdef SQUARE
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3


#ifdef ROMB_1

	int n;
	cout << "Введите размер ромба: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}

#endif // ROMB_1

#ifdef ROMB_2
	int n;
	cout << "Введите размер ромба: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i * 2 + 2; j < n * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMB_2

#ifdef ROMB_3
	int n;
	cout << "Введите размер ромба: "; cin >> n;
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (n - 1 - j == i || n * 2 + n - i - 1 == j)cout << "/";
			//else if (n - 1 - j % n == i % n && i + j + 1 != n * 2)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif // ROMB_3

	int n;
	cout << "Введите количество звездочек: "; cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
}