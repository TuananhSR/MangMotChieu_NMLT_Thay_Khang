#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void DuaVeCuoi(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);

	DuaVeCuoi(b, k);
	cout << "\nMangDuaVeCuoi: ";
	Xuat(b, k);
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

void DuaVeCuoi(int a[], int n)
{
	int vt = n - 1;
	for(int i=n-1;i>=0;i--)
		if (ktNguyenTo(a[i]))
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
}
