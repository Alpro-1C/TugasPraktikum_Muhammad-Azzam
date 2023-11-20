#include <iostream>

using namespace std;

void seven(int n)
{
    cout << "\nBilangan genap 1 sampai " << n << " adalah : ";
    for (int e = 2; e <= n; e += 2)
    {
        cout << e << " ";
    }
}

void sodd(int n)
{
    cout << "\nBilangan ganjil 1 sampai " << n << " adalah : ";
    for (int o = 1; o <= n; o += 2)
    {
        cout << o << " ";
    }
}

bool prime(int p)
{
    if (p < 2)
    {
        return false;
    }
    for (int d1 = 2; d1 * d1 <= p; ++d1)
    {
        if (p % d1 == 0)
        {
            return false;
        }
    }
    return true;
}

void sprime(int n)
{
    cout << "\nBilangan prima 1 sampai " << n << " adalah : ";
    for (int p = 1; p <= n; ++p)
    {
        if (prime(p))
        {
            cout << p << " ";
        }
    }
}

int teven(int n)
{
    int sum = 0;
    for (int e = 2; e <= n; e += 2)
    {
        sum += e;
    }
    return sum;
}

void pfaktor(int num)
{
    cout << "\nFaktor jumlah ganjil : ";
    for (int i = num; i > 0; --i)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n, t;

    cout << "Masukkan angka batas : ";
    cin >> n;

    seven(n);
    sodd(n);
    sprime(n);

    t = teven(n);
    cout << "\nJumlah bilangan genap : " << t;

    pfaktor(t);

    t = 0;
    for (int o = 1; o <= n; o += 2)
    {
        t += o;
    }
    cout << "\nJumlah bilangan ganjil : " << t;

    pfaktor(t);

    t = 0;
    for (int p = 1; p <= n; ++p)
    {
        if (prime(p))
        {
            t += p;
        }
    }
    cout << "\nJumlah bilangan prima : " << t;

    pfaktor(t);

    int s, ts;
    cout << "\nMasukkan tinggi segitiga : " <<endl;
    cin >> ts;

    for (int i = 1, k = 0; i <= ts; ++i, k = 0)
    {
        for (s = 1; s <= ts - i; ++s)
        {
            cout << "  ";
        }
        while (k != 2 * i - 1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    cout << "\nPinjam dulu seratus";



    return 0;
}
