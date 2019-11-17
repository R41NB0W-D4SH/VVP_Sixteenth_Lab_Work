#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, i, j;
	cout << "Введите размерность массива: ";
	cin >> n;

	int *arr = new int[n];
	int *counter = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> arr[i];
		counter[i] = 0;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				counter[i]++;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		if (counter[i] == 2)
		{ 
			arr[i] = 0;
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << "Элемент массива: " << arr[i] << endl;
	}

	system("pause");
	return 0;
}
