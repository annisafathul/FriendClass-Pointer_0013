#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang
{
private:
    double d1, d2;
    double sisi1, sisi2;

public:
   void inputData()
        {
            cout << "=== Input Layang-Layang ===" << endl;
            cout << "Masukkan diagonal 1 (d1): ";
            cin >> d1;
            cout << "Masukkan diagonal 2 (d2): ";
            cin >> d2;
            cout << "Masukkan sisi 1        : ";
            cin >> sisi1;
            cout << "Masukkan sisi 2        : ";
            cin >> sisi2;
        }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }
    
        double hitungKeliling()
        {
            return 2 * (sisi1 + sisi2);
        }

};

class BelahKetupat
{
    private:
    private:
        double d1, d2; 
        double sisi;


    public:
    void inputData()
    {
        cout << "=== Input Belah Ketupat ===" << endl;
            cout << "Masukkan diagonal 1 (d1): ";
            cin >> d1;
            cout << "Masukkan diagonal 2 (d2): ";
            cin >> d2;
            cout << "Masukkan sisi          : ";
            cin >> sisi;
    }

    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling()
        {
            return 4 * sisi;
        }
};

void tampilkanKeliling(LayangLayang& lk, BelahKetupat& bk)
{
    cout << "\n--- Hasil Keliling ---" << endl;
    cout << "Keliling Layang-Layang : " << lk.hitungKeliling() << endl;
    cout << "Keliling Belah Ketupat : " << bk.hitungKeliling() << endl;
}


    