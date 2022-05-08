#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void SapTang(int[], int);
int ktHoanVi(int[], int, int[], int);
void HoanVi(int&, int&);


int main()
{
	int a[100];
	int h;
	Nhap(a, h);
	cout << "\nMang ban dau a:";
	Xuat(a, h);
	cout << '\n' << '\n';
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau b:";
	Xuat(b, k);
	cout << '\n' << '\n';
	cout << "KQ: " << ktHoanVi(a, h, b, k);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}
void SapTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
int ktHoanVi(int a[], int n, int b[], int m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);

	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}