#include <iostream>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
#define sizeArr 15
#define sizeArra 10
#define sizeArraa 10
	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "To exit, press enter'" << endl;
		cout << "Vedite nomer zadaniya : ";
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			/*1.	Массив предназначен для хранения значений весов двадцати человек. С помощью датчика случайных
			чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно*/
			int mas[20];
			for (int i = 0; i < 20; i++)
			{
				mas[i] = 50 + rand() % 100;
				cout << i << "  -  " << mas[i] << "  " << endl;
			}

		}break;

		case 2:
		{
			/*2.	Заполнить массив из восьми элементов таким образом,
			чтобы значения элементов при просмотре массива слева направо образовывали:
			 a.	убывающую последовательность;
			 b.	возрастающую последовательность*/
			bool found = true;
			int mas[8];
			for (int i = 0; i < 8; i++)
			{
				mas[i] = 10 + rand() % 100;
				cout << i << "  -  " << mas[i] << "  " << endl;
				{
					if (mas[i] > mas[i + 1])
					{

						found = false; break;
					}
				}
				if (found)
					cout << "Это возрастающая последовательность\n";
				else  cout << "Это не возрастающая последовательность\n";
			}

		}break;

		case 3:
		{
			/*3.	Ввести целочисленный массив,
			состоящий из 10 элементов. Поменять местами максимальный
			и первый элементы.*/
			int mas[sizeArra], max = 0, k = 0;
			//рандомное число 
			max = mas[0];
			for (int i = 0; i < sizeArra; i++)
			{
				mas[i] = 1 + rand() % 10;
				cout << i << "  -  " << mas[i] << "  " << endl;
			}
			//поиск максимального значения
			max = mas[0];
			for (int i = 0; i < sizeArra; i++)
			{
				if (mas[i] > max)
				{
					max = mas[i];
					k = i;
				}
			}
			cout << "Max " << max << endl;

			int perevod = mas[k];
			mas[k] = mas[0];
			mas[0] = perevod;
			for (int i = 0; i < sizeArra; i++)
			{
				cout << i << " - " << mas[i] << endl;

			}

		}break;

		case 4:
		{
			/*4.	Задан массив, состоящий
			из 15 элементов вещественного типа. Определить количество элементов, значения которых больше первого элемента.*/
			int mas[15];
			//рандомное число 
			for (int i = 0; i < 15; i++)
			{
				mas[i] = 50 + rand() % 100;
				cout << i << "  -  " << mas[i] << "  " << endl;
			}
			//больше первого элемента 
			cout << "Chislo bolhe pervogo  " << endl;
			for (int i = 0; i < 15; i++)
			{
				if (mas[0] < mas[i])
				{
					cout << i << "  -  " << mas[i] << endl;
				}


			}


		}break;

		case 5:
		{
			/*5.	Ввести целочисленный массив, состоящий из 15 элементов. Определить сумму
			и разность максимального и минимального  элементов*/
			int mas[15], max, min;
			//рандомное число 
			for (int i = 0; i < 15; i++)
			{
				mas[i] = 10 + rand() % 30;
				cout << i << "  -  " << mas[i] << "  " << endl;

			}
			max = mas[0];
			min = mas[0];
			for (int i = 0; i < 15; i++)
			{
				if (max < mas[i]) max = mas[i];
				if (min > mas[i]) min = mas[i];

			}
			cout << "Min: " << min << endl;
			cout << "Max: " << max << endl;
			cout << "Ix summa =  " << min + max << "  Ix raznosti = " << max - min << endl;

		}break;

		case 6:
		{
			/*6.	Ввести целочисленный массив, состоящий из 17 элементов.
			Заменить элементы кратные трем на сумму нечетных по значению элементов*/
			int mas[17], sum=0;
			//рандомное число 
			for (int i = 0; i < 17; i++)
			{
				mas[i] = 10 + rand() % 30;
				cout << i << "  -  " << mas[i] << "  " << endl;
			}
			for (int i = 0; i < 17; i++)
			{
				if (mas[i] % 3 == 0)
				{
					sum += mas[i];
				}
			/*	cout << "Massiv kratniy 3  =  " << sum << endl;*/
			}
			cout << "Massiv kratniy 3  =  " << sum << endl;
		}break;

		case 7:
		{
			/*7.	Ввести массив, состоящий из 15 элементов целого типа.
			Определить количество отрицательных, произведение положительных и количество нулевых элементов*/
			int mas[15], sum = 0, sum1 = 1, nul = 0;
			for (int i = 0; i < 15; i++)
			{
				mas[i] = -50 + rand() % 100;
				cout << i << " - " << mas[i] << "  " << endl;
			}
			//количество отрицательных

			for (int i = 0; i < 15; i++)
			{
				if (mas[i] < 0)
				{
					sum++;

				}

			}	cout << "Kol-vo otricatelnix " << sum << endl;
			cout << endl;

			for (int i = 0; i < 15; i++)
			{
				//положительные сколько элементовы
				if (mas[i] > 0)
				{
					sum1 *= mas[i];
				}
			}
			cout << "Proizvedenie " << sum1 << endl;

			for (int i = 0; i < 15; i++)
			{
				if (mas[i] == 0)
					nul++;
			}
			cout << "Kol-vo 0 elementov " << nul << endl;


		}break;

		case 8:
		{
			/*8.	Дан массив − 19 элементов целого типа. Найти сумму элементов, расположенных
			до первого отрицательного элемента. Если отрицательных элементов нет,
			то выдать соответствующее сообщение.*/
			const int n = 19;
			int array[n] = { 0 };
			int i = 0, sum = 0;
			for (i = 0; i < n; ++i)
			{
				array[i] = -50 + rand() % 100;
				cout << i << " - " << array[i] << " " << endl;
				if (array[i] < 0)
					break;
				sum += array[i];
			}
			if (i != n)
				cout << "Sum = " << sum << endl;
			else
				cout << "Not found negative numbers in array" << endl;
		}break;

		case 9:
		{
			/*9.	В заданном массиве М(12) действительных чисел увеличить
			минимальный элемент в три раза и поменять местами с последним*/
			int mas[12], min, umn = 1, k = 0;
			for (int i = 0; i < 12; i++)
			{
				mas[i] = 10 + rand() % 50;
				cout << i << "  -  " << mas[i] << "  " << endl;

			}
			min = mas[0];
			for (int i = 0; i < 12; i++)
			{
				if (min > mas[i]) {
					min = mas[i];
					k = i;
				}
			}
			cout << "Min: " << min << endl;
			for (int i = 1; i < 12; i++)
			{
				umn = min * min* min;
			}
			cout << "Umnoheno na  3 = " << umn << endl;



			int perevod = mas[k];
			mas[k] = mas[11];
			mas[11] = perevod;
			for (int i = 0; i < 12; i++)
			{
				cout << i << " - " << mas[i] << endl;
			}

		}break;

		case 10:
		{
			/*10.	Дан массив М(15) вещественных чисел. Расположить элементы в обратном порядке*/
			int mas[sizeArr], mas1[sizeArr];
			//рандомное число 
			for (int i = 0; i < sizeArr; i++)
			{
				mas[i] = 10 + rand() % 30;
				mas1[sizeArr - i - 1] = mas[i];
				cout << i << "  -  " << mas[i] << "  " << endl;
			}
			//в обратном порядке 
			cout << "V obratnom poryadke " << endl;
			for (int i = 0; i < sizeArr; ++i)
			{
				mas[i] = mas1[i];
				cout << i << " - " << mas[i] << endl;
			}
		}

		}















		system("pause");

	} while (tm != 200);



}