#include<iostream>
#include<conio.h>
using namespace std;

//#define DO_WHILE
//#define SWITCH

void main()
{
	setlocale(LC_ALL, "");

#ifdef DO_WHILE
	int ascii;

	do
	{
		ascii = _getch();

		if (ascii == 119)
		{
			cout << "Идти вперед" << endl;
		}
		else if (ascii == 115)
		{
			cout << "Идти назад" << endl;
		}
		else if (ascii == 97)
		{
			cout << "Идти налево" << endl;
		}
		else if (ascii == 100)
		{
			cout << "Идти направо" << endl;
		}
		else if (ascii == 32)
		{
			cout << "Прыгнуть" << endl;
		}
		else if (ascii == 13)
		{
			cout << "Огонь" << endl;
		}
		else if (ascii == 27)
		{
			cout << "Выход" << endl;
		}
		else
		{
			cout << "ERROR!" << endl;
		}

	} while (true);
#endif // DO_WHILE

#ifdef SWITCH
	char key;
	key = _getch();

	switch (key)
	{
		case char(119) : cout << "Идти вперед" << endl; break;
		case char(115) : cout << "Идти назад" << endl; break;
		case char(97) : cout << "Идти налево" << endl; break;
		case char(100) : cout << "Идти направо" << endl; break;
		case char(32) : cout << "Прыжок" << endl; break;
		case char(13) : cout << "Огонь" << endl; break;
		case char(27) : cout << "Выход" << endl; break;
		default:cout << "Error!" << endl;
	}
	main();
#endif // SWITCH
}
