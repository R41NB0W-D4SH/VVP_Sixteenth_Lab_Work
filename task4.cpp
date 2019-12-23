#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, j, count = 0;
	cout << "Введите размерность массива N: ";
	cin >> n;

	int *arr = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> arr[i];
		if (arr[i] < 0)
		{
		count++;
		}
	}

	int *ar2 = new int[n + count];

	for (i = 0, j = 0; i < n + count; i++, j++)
	{
		ar2[i] = arr[j];
		if (arr[j] < 0)
		{
			ar2[i] = arr[j];
			i++;
            ar2[i] = 0;
		}
	}

	cout << endl;

	for (i = 0; i < n + count; i++)
	{
		cout << "b[" << i << "] : " << ar2[i] << endl;
	}

	system("pause");
	return 0;
}
