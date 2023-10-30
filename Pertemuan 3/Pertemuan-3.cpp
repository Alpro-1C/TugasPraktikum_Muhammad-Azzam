#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Masukkan Nilai Anda : " <<endl;
    cin >> n;

    if (n > 89){
        cout << "Selamat! Nilai anda A\n\n";
    }else if (n > 79){
        cout << "Nilai anda B\n\n";
    }else if (n > 69){
        cout << "Nilai anda C\n\n";
    }else if (n > 59){
        cout << "Nilai anda D\n\n";
    }else if (n < 60){
        cout << "Nilai anda E\n\n";
    };

    int a,b,c;
    cout << "Masukkan 3 angka : \n";
    cin >> a; cin >> b; cin >> c;

    if(a >= b && a >= c){
        cout << "Angka terbesar : " << a;
    }else if (b >= a && b >= c){
        cout << "Angka terbesar : " << b;
    }else if (c >= a && c >= b){
        cout << "Angka terbesar : " << c;
    }

    cout << "\n\n";

    int shape;
    cout << "Pilih dengan memasukkan digit berikut\n 1.Persegi\n 2.Persegi Panjang\n 3.Segitiga\n";
    cin >> shape;


    switch(shape){
    case 1:
        int s;
        cout << "\nMasukkan sisi persegi : ";
        cin >> s;
        cout << "Luas persegi : " << s*s;
        break;
    case 2:
        int p1, l1;
        cout << "\nMasukkan panjang : ";
        cin >> p1;
        cout << "Masukkan lebar : ";
        cin >> l1;
        cout << "Luas persegi panjang : " << p1*l1;
        break;
    case 3 :
        int a1,t1;
        cout << "\nMasukkan alas : ";
        cin >> a1;
        cout << "Masukkan tinggi : ";
        cin >> t1;
        cout << "Luas Segitiga : " << 0.5*a1*t1;
        break;
    }
return 0;
}
