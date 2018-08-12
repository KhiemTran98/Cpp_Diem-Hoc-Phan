#include<iostream>
#include<conio.h>
#include"CDiemHocPhan.h"
using namespace std;
void main()
{
	//CDiemHocPhan* x = new CDiemHocPhan();
	//cout << "Nhap diem" << endl;
	//x->Nhap();

	CDiemHocPhan* x = new CDiemHocPhan(0, 0, 0, 0);

	cout << "Diem TK = " << x->TinhDiemTK();
	delete x;

	_getch();
}