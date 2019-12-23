#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, j = 0;
	cout << "Введите размерность массива: ";
	cin >> n;

	int *a = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}

	int* b = new int[n];

	for (i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1])
		{
			b[j] = a[i];
			j++;
		}
	}

	cout << endl << endl;

	for (i = 0; i < j; i++) cout << "a[" << i << "] : " << b[i] << endl;

	system("pause");
	return 0;
}
