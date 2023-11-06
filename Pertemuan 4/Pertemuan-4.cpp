#include <iostream>

using namespace std;

int main()
    {
    int n, t;

    cout << "Masukkan angka batas : ";
    cin >> n;

    cout << "\nBilangan genap 1 sampai " << n << " adalah : ";
    for (int e = 2; e <= n; e++)
        {
            if (e % 2 == 0)
            cout << e << " ";
        }

    cout << "\nBilangan ganjil 1 sampai " << n << " adalah : ";
    for (int o = 1; o <= n; o++)
        {
            if (o % 2 == 1)
            cout << o << " ";
        }

    cout << "\nBilangan prima 1 sampai " << n <<" adalah : ";
    for (int p = 1; p <= n; p++)
        {
            int t = 0;
            for (int d1 = 1; d1 <= n; d1++)
                {
                    if  (p % d1 == 0)
                    {
                        t++;
                    }
                }
            if (t == 2)
            cout << p << " ";
        }

    cout << "\nJumlah bilangan genap : ";
    t = 0;
    for (int e; e <= n; e++)
        {
            if (e % 2 == 0)
            t += e;
        }
    cout << t;

    cout << "\nFaktor jumlah ganjil : ";
    for (int e = t; e > 0; --e)
        {
            if (t % e == 0)
            {
                    cout << e << " ";
            }
        }

    cout << "\nJumlah bilangan ganjil : ";
    for (int o = 1; o <= n; o++)
        {
            if (o % 2 == 1)
            t += o;
        }
    cout <<t;

    cout << "\nFaktor jumlah ganjil : ";
    for (int o = t; o > 0; --o)
        {
            if (t % o == 0)
            {
                    cout << o << " ";
            }
        }

    cout << "\nJumlah bilangan prima : ";
    for (int p = 1; p <= n; p++)
        {
            int tp = 0;
            for (int d1 = 1; d1 <= n; d1++)
                {
                    if  (p % d1 == 0)
                    {
                        tp++;
                    }
                }
            if (tp == 2)
            t += p;
        }
    cout << t;

    cout << "\nFaktor jumlah ganjil : ";
    for (int p = t; p > 0; --p)
        {
            if (t % p == 0)
            {
                    cout << p << " ";
            }
        }
    cout << endl;

    int s, ts;

    cout <<"\nMasukkan tinggi segitiga : ";
    cin >> ts;

    for(int i = 1, k = 0; i <= ts; ++i, k = 0)
        {
            for(s = 1; s <= ts-i; ++s)
                {
                    cout <<"  ";
                }
            while(k != 2*i-1)
                {
                    cout << "* ";
                    ++k;
                }
            cout << endl;
        }

    cout << "\nPinjam dulu seratus";

    return 0;
    }
