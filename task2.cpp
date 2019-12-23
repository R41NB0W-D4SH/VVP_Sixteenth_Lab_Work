#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, n1, j, k, t = 0, el = 0;
	bool marker = true, ind = false;

	cout << "Введите N размерность массива: ";
	cin >> n;

	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}

	int* rewrtd = new int[n];
	int* buff = new int[n];

	n1 = n;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j] & a[j] != buff[j])
			{
				if (ind == false) ind = true, el = a[i];
				else
				{
					marker = false;
					buff[j] = a[j];
				}
			}
		}
		if (marker == true & ind == true)
		{
			for (k = 0; k < n; k++)
			{
				if (a[k] != el)
				{
					rewrtd[t] = a[k];
					t++;
				}

			}
			t = 0;
			n1 -= 2;
		}
		ind = false;
		marker = true;
	}

	cout << endl << "Размер массива : " << n1 << endl << endl;

	for (t = 0; t < n1; t++) cout << "b[" << t << "] = " << rewrtd[t] << endl;

	system("pause");
	return 0;
}
