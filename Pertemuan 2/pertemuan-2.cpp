#include <iostream>

using namespace std;

int main(){

    int v1 = 10, v2 = 8, t;

    cout << "Sebelum dipindahkan dengan variable ke-3" <<endl;
    cout << "First value : " <<v1 <<endl;
    cout << "Second Value : " <<v2 <<endl<<endl;

    t=v1;
    v1=v2;
    v2=t;

    cout << "Sesudah dipindahkan dengan variable ke-3" <<endl;
    cout << "First Value : " <<v1 <<endl;
    cout << "Second Value : " <<v2 <<endl<<endl;

    int vr1 = 10, vr2 = 8;

    cout << "Sebelum dipindakan tanpa variable ke-3" <<endl;
    cout << "First Value : " <<vr1 <<endl;
    cout << "Second Value : " <<vr2 <<endl <<endl;

    vr1=vr1+vr2;
    vr2=vr1-vr2;
    vr1=vr1-vr2;

    cout << "Sesudah dipindahkan tanpa variable ke-3" <<endl;
    cout << "First value : " <<vr1 <<endl;
    cout << "Second Value : " <<vr2 <<endl <<endl;

    int b,f,h;
    cout << "Bebek yang akan dibagikan kepada teman pak Tatang : ";
    cin >> b;

    cout << "Jumlah teman pak Tatang : ";
    cin >>f;

    h=b/f;

    cout << "Hasil pembagian : " <<h<<endl;
    cout << "Sisa pembagian : "<<b%f<<endl;

    return 0;
}
