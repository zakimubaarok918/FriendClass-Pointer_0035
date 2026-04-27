#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;
class LayangLayang {
private:
    double d1, d2, s1, s2;

    public:
    
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang l, BelahKetupat b);
};

class BelahKetupat {
private:
    double d1, d2, s;

    public:
    void inputData() {
        cout << "\n--- Input Data Belah Ketupat ---" << endl;
        cout << "Masukkan Diagonal 1: "; cin >> d1;
        cout << "Masukkan Diagonal 2: "; cin >> d2;
        cout << "Masukkan Panjang Sisi: "; cin >> s;
        }    

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang l, BelahKetupat b);
};

void tampilkanKeliling()(LayangLayang l, BelahKetupat b)
{
    double kelilingLayang = 2 * (l.s1 + l.s2);
    double kelilingBelah = 4 * b.s;
}

int main() {
    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelah;