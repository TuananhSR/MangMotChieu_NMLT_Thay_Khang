#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 1;
}

void Nhap(int a[], int& n)
{
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 3)
			cout << "Nhap lai" << endl;
	} while (n < 3);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		int kq = TanSuat(a, n, a[i]);
		if (flag == 1 && kq > 1)
			cout << setw(8) << a[i];
	}
}