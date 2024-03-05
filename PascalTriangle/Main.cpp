#include <iostream>
using namespace std;

//#define PASCAL_1

const int width = 8;
typedef unsigned long long int DataType; // ƒиректива создающа€ псевдонима дл€ существующего типа данных:
// typedef существующий_тип_данных новое_им€;

void main()
{
	setlocale(LC_ALL, "");

#ifdef PASCAL_1
	
	int value;
	int n;

	cout << "¬ведите размер треугольника: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		value = 1;
		for (int j = 0; j < n - 1 - i; j++) cout << " ";
		for (int k = 0; k <= i; k++)
		{
			cout << " " << value;
			value = value * (i - k) / (k + 1);
		}
		cout << endl << endl;

	}
#endif // PASCAL_1

	int h;
	cout << "¬ведите высоту треугольника: "; cin >> h;
	for (int i = 0; i < h; i++)
	{
		cout.width(width/2); // задает ширину вывода на экран, а точнее, определ€ет, сколько знакопозиций будет занимать выводимое значение
		// ≈сли выводимое значение занимает больше знакопозиций, то оно выйдет за пределы указанной ширины.
		cout << ""; // даже при выводе пустой строки, она займет всю заданную ширину (width/2)
	}
	cout << left;
	cout << 1 << endl;
	int nf = 1;

	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		int mf = 1;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(width / 2);
			cout << "";
		}
		cout.width(width);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m; 
			int nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)nmf *= nm;
			cout.width(width);
			cout << nf / mf / nmf;
		}
		cout << endl;
	}
}