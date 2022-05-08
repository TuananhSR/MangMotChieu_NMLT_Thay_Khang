#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);
	cout << "\nMang nho hon tri tuyet doi cua gia tri dung lien sau no va lon hon gia tri dung lien truoc no: ";
	LietKe(b, k);
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
		cout << setw(10) << a[i];
}

void LietKe(int a[], int n)
{
	for (int i = 1; i <= n - 2; i++)
		if (a[i]<abs(a[i + 1]) && a[i] > a[i - 1])
			cout << setw(10) << a[i];
}
