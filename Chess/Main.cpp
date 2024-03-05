#include <iostream>
using namespace std;

//#define CHESS_1
//#define CHESS_2
//#define ASCII 
//#define CHESS_3

#define CHESS_CLASS_1
#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196 << (char)196
#define VERTICAL_LINE		(char)179 
#define WHITE_BOX			"\xDB\xDB" //(char)219 << (char)219
#define BLACK_BOX			"\x20\x20"

void main()
{
	setlocale(LC_ALL, "");

#ifdef CHESS_1
	int n;

	cout << "Enter size: "; cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				for (int l = 0; l < n; l++) {
					if (k % 2 == i % 2) cout << "* ";
					else cout << "  ";

				}
			}
			cout << endl;
		}
	}
	

#endif // CHESS_1

#ifdef CHESS_2
	int n;
	cout << "Enter size: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2) cout << char(219);
			else cout << char(255);
		}
		cout << endl;
	}
#endif // CHESS_2

#ifdef ASCII
	for (int i = 176; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";

		//cout << i << "\t" << (char)i << endl;
	}
	cout << endl;
#endif // ASCII

#ifdef CHESS_3
	setlocale(LC_ALL, "C"); //включает кодировку по умолчанию
	int n;
	cout << "¬ведите размер доски: "; cin >> n; n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
			/*else if (i % 2 == j % 2) cout << WHITE_BOX;
			else cout << BLACK_BOX:*/
			cout << endl;
		}
	}
#endif // CHESS_3

}