#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
	cout << "Nhap n " << endl;
	int a[10000];
	int n;
	NhapMangint(a,n);
	xaydungmang_310(a, n);
	system("pause");
	return 0;
}