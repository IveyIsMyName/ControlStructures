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
			cout << "���� ������" << endl;
		}
		else if (ascii == 115)
		{
			cout << "���� �����" << endl;
		}
		else if (ascii == 97)
		{
			cout << "���� ������" << endl;
		}
		else if (ascii == 100)
		{
			cout << "���� �������" << endl;
		}
		else if (ascii == 32)
		{
			cout << "��������" << endl;
		}
		else if (ascii == 13)
		{
			cout << "�����" << endl;
		}
		else if (ascii == 27)
		{
			cout << "�����" << endl;
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
		case char(119) : cout << "���� ������" << endl; break;
		case char(115) : cout << "���� �����" << endl; break;
		case char(97) : cout << "���� ������" << endl; break;
		case char(100) : cout << "���� �������" << endl; break;
		case char(32) : cout << "������" << endl; break;
		case char(13) : cout << "�����" << endl; break;
		case char(27) : cout << "�����" << endl; break;
		default:cout << "Error!" << endl;
	}
	main();
#endif // SWITCH
}
