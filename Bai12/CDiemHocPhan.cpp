#include<iostream>
#include"CDiemHocPhan.h"
using namespace std;
CDiemHocPhan::CDiemHocPhan()
{
	DCC = TBKT = Thi = SoTC = 0;
}
CDiemHocPhan::CDiemHocPhan(int DCC, double TBKT, int Thi, int SoTC)
{
	this->DCC = DCC;
	this->TBKT = TBKT;
	this->Thi = Thi;
	this->SoTC = SoTC;
}
CDiemHocPhan::~CDiemHocPhan() {}
void CDiemHocPhan::Nhap()
{
	cout << "Nhap diem chuyen can: ";
	cin >> DCC;
	cout << "Nhap diem TBKT: ";
	cin >> TBKT;
	cout << "Nhap diem thi: ";
	cin >> Thi;
	cout << "Nhap so tin chi: ";
	cin >> SoTC;
}
double CDiemHocPhan::TinhDiemTK()
{
	return DCC * 0.1 + TBKT * 0.4 + Thi * 0.5;
}