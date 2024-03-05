#include <iostream>
using namespace std;

#define ROMB_1
//#define VARIABLE_EXCHANGE_1
//#define VARIABLE_EXCHANGE_2


void main()
{ 
	setlocale(LC_ALL, "");


#ifdef ROMB_1
	int n;
cout << "Введите размер ромба: "; cin >> n;
for (int i = 0; i < n; i++)
{
	for (int j = i; j < n; j++) cout << " "; cout << "/";
	for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
	cout << endl;
}
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
	for (int j = i; j < n - 1; j++) cout << "  "; cout << "/";
	cout << endl;
}
#endif // ROMB_1

#ifdef VARIABLE_EXCHANGE_1
int a, b;
cout << "a = "; cin >> a;
cout << "b = "; cin >> b;
int c = a; //временная переменная
a = b;
b = c;
cout << "a = " << a << endl;
cout << "b = " << b;
#endif // VARIABLE_EXCHANGE

#ifdef VARIABLE_EXCHANGE_2
int a, b;
cout << "a = "; cin >> a;
cout << "b = "; cin >> b;

a += b;
b = a - b;
a -= b;

cout << "a = " << a << endl;
cout << "b = " << b;
#endif // VARIABLE_EXCHANGE_2



}