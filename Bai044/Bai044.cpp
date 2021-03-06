#include <iostream>
using namespace std;

void Nhap(int[], int&);
int TongCucDai(int[], int);
int TongCucTieu(int[], int);
int TongCucTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);

	int s = TongCucTri(a, n);
	cout << "\nTong cac phan tu cuc tri: " << s;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int TongCucDai(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}

int TongCucTieu(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] < a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			s = s + a[i];
	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}

int TongCucTri(int a[], int n)
{
	int s1 = TongCucDai(a, n);
	int s2 = TongCucTieu(a, n);
	return (s1 + s2);
}