#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;




void main()
{
	setlocale(LC_ALL, "RUS");
	cout << "\n\t\t �������� �������: " << endl << endl;
	cout << "������ � �������� - 1" << endl << endl;
	cout << "����� ������� - 2" << endl << endl;
	cout << "������� ����� � ����������������� ������� ��������� - 3" << endl << endl;
	cout << "������� ����� � �������� ������� ��������� - 4" << endl << endl;
	int n; cin >> n;
	const int m = 5;
	double summ=0, max, min;
	int key;

	if (n == 1)
	{
		system("CLS"); // ������ �� ����/����� �������
		cout << "\n\t������� 5 ��������� �������: " << endl;

		double array[m];
		for (int i = 0;i < 5;i++)
		{
			cin >> array[i];
		}
		cout << "\n�� �����: ";
		for (int i = 0;i < 5;i++)
		{
			cout << array[i] << "  ";
		}
		cout << endl;
		cout << "\n������ � �������� �������: ";
		for (int i = 4;i >= 0;i--)
		{
			cout << array[i] << "  ";
		}
		cout << endl;
		cout << "\n����� ��������� ������� ��������: ";
		max = min = array[0];
		for (int i = 0;i < 5;i++)
		{
			if (max < array[i]) max = array[i];
			if (min > array[i]) max = array[i];
			summ += array[i];
			cout << array[i];
			if (i != 4) cout << "+";
		}
		cout << "=" << summ << endl;
		cout << "������� �������������� ������� ��������: " << summ / 5 << endl << endl;
		cout << "������������ ������� ������� �����: " << max << endl << endl;
		cout << "����������� ������� ������� �����: " << min << endl << endl;
		cout << "_____________________________________________________________________________" << endl;
		cout << "\n��� ������ � ������� ���� ������� - 1" << endl << endl;
		cout << "��� ���������� ��������� ������� - Esc" << endl << endl;
		do
		{
			key = _getch();
			if (key == 49)
			{
				system("CLS");
				main();
			}
			else if (key == 27) break;
			else cout << "��������� ����!";
		} while (key != 49 && key != 27);
	}
	else if (n == 2)
	{
		system("CLS"); // ������ �� ����� �������
		cout << "\n\t�������� ������: " << endl;

		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

		for (int i = 0;i < 10;i++)
		{
			cout << arr[i] << "  ";
		}
		cout << endl;
		cout << "��� ������ ������� ������ ������� R" <<endl <<endl;
		cout << "��� ������ ������� ����� ������� L" <<endl <<endl;
		key = _getch();
		do
		{
			if (key == 76 || key == 108) //left
			{
				cout << "Left"; break;
			}
			else if (key == 82 || key == 114)//right
			{
				cout << "Right" << endl;break;
			}
			else cout << "��������� ����" << endl << endl;
		} while (key != 76 || key != 108 || key != 82 || key != 114);
		int k;
		cout << "\n\n������� ��������, �� ������� ���������� �������� ������: "; cin >> k;

		if (key == 76 || key == 108)//left
		{
			for (int i = 0; i < 10;i++)
			{
				arr[i] = arr[i] + k;
				if (arr[i] > 10) arr[i] -= 10;
			}
		}
		else if (key == 82 || key == 114)//right
		{
			for (int i = 0; i < 10;i++)
			{
				arr[i] = arr[i] - k;
				if (arr[i] <= 0) arr[i] += 10;
			}
		}

		for (int i = 0;i < 10;i++) cout << arr[i] << "\t";
		cout << endl << endl;


		cout << "_____________________________________________________________________________" << endl;
		cout << "\n��� ������ � ������� ���� ������� - 1" << endl << endl;
		cout << "��� ���������� ��������� ������� - Esc" << endl << endl;
		do
		{
			key = _getch();
			if (key == 49)
			{
				system("CLS");
				main();
			}
			else if (key == 27) break;
			else cout << "��������� ����!" << endl << endl;
		} while (key != 49 && key != 27);
	}
	else if (n == 3)
	{
	system("CLS"); // ����������������� �������
	int numer;
	cout << "\n������� ���������� �����, ������� ���������� ��������� � ����������������� �������: ";
	cin >> numer;
	int numer_1 = numer;
	if (numer_1 < 16)
	{
		cout << "\n�����: " << numer << "=0x0";
		for (int i = 0;i < 2;i++)
		{
			if (numer_1 == 10)cout << 'A';
			else if (numer_1 == 11)cout << 'B';
			else if (numer_1 == 12)cout << 'C';
			else if (numer_1 == 13)cout << 'D';
			else if (numer_1 == 14)cout << 'E';
			else if (numer_1 == 15)cout << 'F';
			else cout << numer_1;
		}
	} 
	
	else if (numer_1 >= 16)
	{
		int razryad[2];
		razryad[0] = numer_1 % 16;
		//cout << razryad[0] << endl << endl;
		numer_1 -= razryad[0];
		razryad[1] = numer_1 / 16;




		cout << "\n�����: " << numer << "=0x";
		for (int i = 0;i < 2;i++)
		{
			if (razryad[i] == 10)cout << 'A';
			else if (razryad[i] == 11)cout << 'B';
			else if (razryad[i] == 12)cout << 'C';
			else if (razryad[i] == 13)cout << 'D';
			else if (razryad[i] == 14)cout << 'E';
			else if (razryad[i] == 15)cout << 'F';
			else cout << razryad[i];
		}
	}
	cout << "_____________________________________________________________________________" << endl;
	cout << "\n��� ������ � ������� ���� ������� - 1" << endl << endl;
	cout << "��� ���������� ��������� ������� - Esc" << endl << endl;
	do
	{
		key = _getch();
		if (key == 49)
		{
			system("CLS");
			main();
		}
		else if (key == 27) break;
		else cout << "��������� ����!" << endl << endl;
	} while (key != 49 && key != 27);
	}
	else if (n == 4)
	{
	system("CLS"); // �������� �������
	int peremennaya = 0;
	cout << "\n������� ���������� �����, ������� ���������� ��������� � �������� �������: ";
	cin >> peremennaya;
	int element[8] = {};
	for (int i = 7; i >=0;i--)
	{
		if (peremennaya % 2 == 0) element[i] = 0;
		else element[i] = 1;

	}


	}
	else
	{
		cout << "��������� ����" << endl;
		system("pause");
		system("CLS");
		main();
	}
		
	
}