#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, t;
	cout << "Введите размерность массива: ";
	cin >> n;

	int *arr = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> arr[i];
	}

    t = arr[0];
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] == arr[i + 1] || t == arr[i+1])
		{
		    t = arr[i + 1];
			arr[i + 1] = 0;
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : " << arr[i] << endl;
	}

	system("pause");
	return 0;
}
