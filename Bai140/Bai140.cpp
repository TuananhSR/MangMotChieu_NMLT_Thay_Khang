#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void HoanVi(int&, int&);
void NguyenToTang(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);

	cout << "\nMangSNT: ";
	NguyenToTang(b, k);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void NguyenToTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktNguyenTo(a[i]) && ktNguyenTo(a[j]) && a[i] > a[j])
				HoanVi(a[i], a[j]);
	int b[100];
	int h = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			b[h++] = a[i];
	for (int i = 0; i < h; i++)
		cout << setw(8) << b[i];
		
}
