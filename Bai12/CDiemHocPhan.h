class CDiemHocPhan
{
private:
	int DCC;
	double TBKT;
	int Thi;
	int SoTC;
public:
	CDiemHocPhan();
	CDiemHocPhan(int DCC, double TBKT, int Thi, int SoTC);
	~CDiemHocPhan();
	void Nhap();
	double TinhDiemTK();
};