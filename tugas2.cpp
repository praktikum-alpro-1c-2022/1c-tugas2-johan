#include <iostream>
using namespace std;

int main()
{
    //? Persegi

    int sisi;

    cout << "Rumus Luas Persegi" << endl;
    cout << "Masukkan Sisi : ";
    cin >> sisi;
    int hasilPersegi = sisi * sisi;
    cout << "Hasil : " << hasilPersegi << endl
         << endl;

    //? Persegi Panjang

    int panjang, lebar;

    cout << "Rumus Luas Persegi Panjang" << endl;
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;
    int hasilPersegiPanjang = panjang * lebar;
    cout << "Hasil : " << hasilPersegiPanjang << endl
         << endl;

    //? Segitiga

    float alasSegitiga, tinggiSegitiga;

    cout << "Rumus Segitiga" << endl;
    cout << "Masukkan Alas : ";
    cin >> alasSegitiga;
    cout << "Masukkan Tinggi : ";
    cin >> tinggiSegitiga;
    float hasilSegitiga = 0.5 * alasSegitiga * tinggiSegitiga;
    cout << "Hasil : " << hasilSegitiga << endl
         << endl;

    //? Trapesium

    float aTrapesium, bTrapesium, tinggiTrapesium;

    cout << "Rumus Trapesium" << endl;
    cout << "Masukkan A : ";
    cin >> aTrapesium;
    cout << "Masukkan B : ";
    cin >> bTrapesium;
    cout << "Masukkan Tinggi : ";
    cin >> tinggiTrapesium;
    float hasilTrapesium = 0.5 * (aTrapesium + bTrapesium) * tinggiTrapesium;
    cout << "Hasil : " << hasilTrapesium << endl
         << endl;

    //? Jajar Genjang

    float alasJajar, tinggiJajar;

    cout << "Rumus Jajar Genjang" << endl;
    cout << "Masukkan Alas : ";
    cin >> alasJajar;
    cout << "Masukkan Tinggi : ";
    cin >> tinggiJajar;
    int hasilJajar = alasJajar * tinggiJajar;
    cout << "Hasil : " << hasilJajar << endl
         << endl;

    //? Belah Ketupat

    float d1Ketupat, d2Ketupat;

    cout << "Rumus Belah Ketupat" << endl;
    cout << "Masukkan Diagonal 1 : ";
    cin >> d1Ketupat;
    cout << "Masukkan Diagonal 2 : ";
    cin >> d2Ketupat;
    float hasilBelahKetupat = 0.5 * d1Ketupat * d2Ketupat;
    cout << "Hasil : " << hasilBelahKetupat << endl
         << endl;

    //? layang

    float d1Layang, d2Layang;

    cout << "Rumus Layang layang" << endl;
    cout << "Masukkan Diagonal 1 : ";
    cin >> d1Layang;
    cout << "Masukkan Diagonal 2 : ";
    cin >> d2Layang;
    float hasilLayang = 0.5 * d1Layang * d2Layang;
    cout << "Hasil : " << hasilLayang << endl
         << endl;

    //? Lingkaran

    float phi, r;

    cout << "Rumus Layang layang" << endl;
    cout << "Masukkan Phi : ";
    cin >> phi;
    cout << "Masukkan Jari - jari : ";
    cin >> r;
    float hasilLingkaran = phi * (r * r);
    cout << "Hasil : " << hasilLingkaran << endl
         << endl;
}