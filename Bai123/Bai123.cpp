#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktDoiXung(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);

	cout << '\n' << '\n';
	if (ktDoiXung(b, k))
		cout << "KQ: 1";
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

int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		if (a[d] != a[c])
			flag = 0;
		d++;
		c--;
	}
	return flag;
}
