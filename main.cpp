#include <iostream>

using namespace std;

int main(){


    cout << "PROGRAM UNTUK MEMENTUKAN NILAI TERTINGGI PADA SUATU ARRAY" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << endl;


    //menentukan banyak elemen di dalam array
    int Jumlah, Tinggi, Hasil;
    cout << "Masukkan banyaknya elemen dalam suatu array = ";
    cin >> Jumlah;
    cout << endl;
    cout << "------MASUKAN NILAI INDEKS HANYA 1 DIGIT ANGKA-------" << endl;

    //menentukan nilai yang terdapat dalam indeks
    int Data[Jumlah];
    for (int i = 0; i<Jumlah; i++){
        cout << "Masukan Nilai Pada indeks Ke - " << i << " = ";
        cin >> Data[i];
        cout << endl;
    }



    //menentukan angka tertinggi pada array
    cout << endl;
    Tinggi=Data[0];
    for (int u = 0; u < Jumlah; u++){
        if (Data [u] > Tinggi){
            Tinggi=Data[u];
        }
    }



    //output array
    cout << "Nilai Tertinggi Dari Array Tersebut Adalah = " << Tinggi << endl;
    cout << endl;


    if (Data == 0){
        cout << "data indeks tidak ditemukan" << endl;
    } else {
        cout << "nilai tertinggi ditemukan di : " << endl ;
        for(int a = 0; a < Tinggi; a++)
        if (Tinggi == Data[a]){
            cout << "indeks ke- " << a << endl;
        }
    }

return 0;
}
