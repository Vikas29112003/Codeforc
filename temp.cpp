//							     *۝ॐ..जय श्री राम..ॐ۝
#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int b[28] = {0}, c[28] = {0};
	int a[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		count = 0;

		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j])
			{
				count++;
				b[i] = a[i];
				c[i] = count;
			}
		}
	}
	int w = 0;
	for (int i = 0; i < n; i++)
	{
		if (b[i] != b[i + 1])
		{
			if (c[i] == c[i + 1])
			{
				w++;
			}
		}
	}
	w == 0 ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}