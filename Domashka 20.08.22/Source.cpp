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
	cout << "\n\t\t Выберите задание: " << endl << endl;
	cout << "Задача с массивом - 1" << endl << endl;
	cout << "Сдвиг массива - 2" << endl << endl;
	cout << "Перевод числа в шестнадцатиричную систему счисления - 3" << endl << endl;
	cout << "Перевод числа в двоичную систему счисления - 4" << endl << endl;
	int n; cin >> n;
	const int m = 5;
	double summ=0, max, min;
	int key;

	if (n == 1)
	{
		system("CLS"); // задача на ввод/вывод массива
		cout << "\n\tВведите 5 элементов массива: " << endl;

		double array[m];
		for (int i = 0;i < 5;i++)
		{
			cin >> array[i];
		}
		cout << "\nВы ввели: ";
		for (int i = 0;i < 5;i++)
		{
			cout << array[i] << "  ";
		}
		cout << endl;
		cout << "\nМассив в обратном порядке: ";
		for (int i = 4;i >= 0;i--)
		{
			cout << array[i] << "  ";
		}
		cout << endl;
		cout << "\nСумма элементов массива составит: ";
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
		cout << "Среднее арифметическое масиива составит: " << summ / 5 << endl << endl;
		cout << "Максимальные элемент массива равен: " << max << endl << endl;
		cout << "Минимальный элемент массива равен: " << min << endl << endl;
		cout << "_____________________________________________________________________________" << endl;
		cout << "\nДля выхода в главное меню нажмите - 1" << endl << endl;
		cout << "Для завершения программы нажмите - Esc" << endl << endl;
		do
		{
			key = _getch();
			if (key == 49)
			{
				system("CLS");
				main();
			}
			else if (key == 27) break;
			else cout << "Повторите ввод!";
		} while (key != 49 && key != 27);
	}
	else if (n == 2)
	{
		system("CLS"); // задача на сдвиг массива
		cout << "\n\tИсходный массив: " << endl;

		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

		for (int i = 0;i < 10;i++)
		{
			cout << arr[i] << "  ";
		}
		cout << endl;
		cout << "Для сдвига массива вправо нажмите R" <<endl <<endl;
		cout << "Для сдвига массива влево нажмите L" <<endl <<endl;
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
			else cout << "Повторите ввод" << endl << endl;
		} while (key != 76 || key != 108 || key != 82 || key != 114);
		int k;
		cout << "\n\nВведите значение, на которое необходимо сдвинуть массив: "; cin >> k;

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
		cout << "\nДля выхода в главное меню нажмите - 1" << endl << endl;
		cout << "Для завершения программы нажмите - Esc" << endl << endl;
		do
		{
			key = _getch();
			if (key == 49)
			{
				system("CLS");
				main();
			}
			else if (key == 27) break;
			else cout << "Повторите ввод!" << endl << endl;
		} while (key != 49 && key != 27);
	}
	else if (n == 3)
	{
	system("CLS"); // шестнадцатиричная система
	int numer;
	cout << "\nВведите десятичное число, которое необходимо перевести в шестнадцатиричную систему: ";
	cin >> numer;
	int numer_1 = numer;
	if (numer_1 < 16)
	{
		cout << "\nОтвет: " << numer << "=0x0";
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




		cout << "\nОтвет: " << numer << "=0x";
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
	cout << "\nДля выхода в главное меню нажмите - 1" << endl << endl;
	cout << "Для завершения программы нажмите - Esc" << endl << endl;
	do
	{
		key = _getch();
		if (key == 49)
		{
			system("CLS");
			main();
		}
		else if (key == 27) break;
		else cout << "Повторите ввод!" << endl << endl;
	} while (key != 49 && key != 27);
	}
	else if (n == 4)
	{
	system("CLS"); // двоичная система
	int peremennaya = 0;
	cout << "\nВведите десятичное число, которое необходимо перевести в двоичную систему: ";
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
		cout << "Повторите ввод" << endl;
		system("pause");
		system("CLS");
		main();
	}
		
	
}