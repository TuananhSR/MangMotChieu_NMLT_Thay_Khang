#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);


int main()
{
	int a[100];
	int h;
	int b[100];
	int k;
	
	Nhap(a, h);
	cout << "\nMang ban dau a[]:";
	Xuat(a, h);
	cout << '\n';
	Nhap(b, k);
	cout << "\nMang ban dau b[]:";
	Xuat(b, k);
	cout << '\n' << '\n';
	cout << "KQ: " << ktThuoc(a, h, b, k);

	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 0;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int ktThuoc(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
}
