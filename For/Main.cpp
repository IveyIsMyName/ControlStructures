#include<iostream>
#include<ctime>
using namespace std;
using std::cin;
using std::cout;

//#define WHILE
//#define CLASSWORK
//#define TASK1
//#define TASK2
//#define TASK3
//#define TASK4_&_TASK5
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define NEWTASK1
//#define NEWTASK2
#define NEWTASK3
//#define SIMPLEX_NUMBERS
//#define MULTIPLICATION_TABLE


void main()
{
	setlocale(LC_ALL, "");

#ifdef WHILE
	int i = 0; //������� �����
	int n;	//���-�� ��������
	cout << "������� ���-�� ��������: "; cin >> n;
	while (i < n)
	{
		cout << "Hello\n";
		i++;
	}
#endif // WHILE

#ifdef CLASSWORK
	int n;

	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // CLASSWORK

	//HOMEWORK STARTS HERE:

#ifdef TASK1
	int factorial = 1;
	int number;
	cout << "������� �����: ";
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}
	cout << "��������� �����: " << number << " = " << factorial;
#endif // TASK1

#ifdef TASK2
	int osn;
	int pok;
	int n;

	cout << "������� ���������: ";
	cin >> osn;
	cout << "������� ����������: ";
	cin >> pok;
	n = osn;

	for (int i = 1; i < pok; i++)
	{
		n *= osn;

	}
	cout << "������� �����: " << n;
#endif // TASK2

#ifdef TASK3
	char ascii = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			cout << ascii++ << ' ';

		}
		cout << endl;
	}
#endif // TASK3

#ifdef TASK4_&_TASK5
	int number;
	int a = 0;
	int b = 1;
	int c;
	cout << "������� �����: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		cout << a << ' ';
		c = a + b;
		a = b;
		b = c;
		if (i == number)
			cout << endl << "���������� ����� �� ���� ���������: " << i << endl;
	}
#endif // TASK4_&_TASK5

	//MORE CLASSWORK:

#ifdef FACTORIAL
	int n;
	cout << "������� �����: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
#endif // FACTORIAL

#ifdef POWER

	double a;		//��������� �������
	double n;		// ���������� �������
	double N = 1;  // ������� 
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;

#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

	//NEW HOMEWORK:

#ifdef NEWTASK1
	int n, a;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 2; i <= n; i++)
	{
		a = 0;
		for (int j = 2; j < i / 2; j++)
		{
			if (i % j == 0)
			{
				a++;
				break;
			}
		}
		if (a == 0)
			cout << i << "\t";
	}
#endif // ������� �����

#ifdef NEWTASK2
	cout << "������� ���������\n\n";
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
#endif // ������� ���������

#ifdef NEWTASK3
	cout << "������� ��������\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif // ������� ��������

	//CLASSWORK:

#ifdef SIMPLEX_NUMBERS

	int n;
	cout << "������� ���������� �����: "; cin >> n;
	int simplex_counter = 0;
	time_t start = clock();
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; //�������� ����� 'Break' ��������� ������� �������� � ��� ����������
			}
		}
		if (simple)simplex_counter++;
			//cout << (simplex_counter++, i) << "\t";
	}
	time_t end = clock();
	cout << endl;
	cout << "���������� ������� �����: " << simplex_counter << endl;
	cout << "Calculated by " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
#endif // SIMPLEX_NUMBERS

#ifdef MULTIPLICATION_TABLE

	for (int i = 1; i <= 10; i++) //Outer for
	{
		cout << "������� ��������� �� " << i << ":\n";
		for (int j = 1; j <= 10; j++) // Inner for
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout <<	i * j << endl;
		}
		cout << endl;
	}

#endif // MULTIPLICATION_TABLE
}