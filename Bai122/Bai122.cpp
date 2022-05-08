#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktToanChan(int[], int);

int main()
{
	int b[1000];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);
	cout << '\n';
	if (ktToanChan(b, k) == 1)
		cout << "KQ: +1";
	else
		cout << "KQ: 0";
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

int ktToanChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			dem++;
	if (dem == n)
		return 1;
	return 0;
}
