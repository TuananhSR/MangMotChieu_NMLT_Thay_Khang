#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktSong(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);

	cout << '\n' << '\n';
	cout << "KQ: " << ktSong(b, k);

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

int ktSong(int a[], int n)
{
	if (n <= 0)
		return 0;
	if (n == 2)
		if (a[0] == a[1])
			return 0;
		else
			return 1;
	int flag = 1;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] - a[i - 1]) * (a[i] - a[i + 1]) <= 0)
			flag = 0;
	return flag;
}
