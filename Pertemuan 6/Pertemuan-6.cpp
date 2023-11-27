#include <iostream>

using namespace std;

int main()
{
    int max = 100;
    int arr[max];
    int n;

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; ++i)
        {
            cout << "Elemen ke-" << i << ": ";
            cin >> arr[i];
        }

    int nt = arr[0];
    int it = 0;

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > nt)
        {
            nt = arr[i];
            it = i;
        }
    }

    cout << "Nilai tertinggi: " << nt << endl;

    cout << "Nilai tersebut ditemukan pada indeks: " << it << endl;

    return 0;
}
