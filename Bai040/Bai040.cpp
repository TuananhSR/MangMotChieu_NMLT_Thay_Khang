#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TongCucTieu(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);

	float s = TongCucTieu(a, n);
	cout << "\nTong cac gia tri nho hon cac gia tri xung quanh: " << s;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float TongCucTieu(float a[], int n)
{
	float s = 0;
	if (n == 1)
		s += a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			s += a[i];
	if (a[n - 1] < a[n - 2])
		s += a[n - 1];
	return s;
}