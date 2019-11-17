#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, j, temp;
	cout << "Введите размерность массива: ";
	cin >> n;

	n = n + 2;

	int *arr = new int[n];
	int *ar2 = new int[n];

	for (i = 1; i < n - 1; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> arr[i];
		ar2[i] = arr[i];
	}

	for (i = n - 2; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	arr[0] = 0; 
	arr[n - 1] = 0;

	cout << "Новый массив: " << endl;
	for (i = 0; i < n; i++)
	{
		cout << "Элемент массива: " << arr[i] << endl;
	}
	cout << endl << "Старый массив: " << endl;
	for (i = 1; i < n - 1; i++)
	{
		cout << "Элемент массива: " << ar2[i] << endl;
	}

	system("pause");
	return 0;
}
