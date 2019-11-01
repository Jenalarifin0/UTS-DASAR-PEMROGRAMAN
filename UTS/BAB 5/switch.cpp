#include <iostream>
using namespace std;

int main ()
{
    int pilihan;

    cout << "Staf Pengajar Pemograman C++ :" << endl;
    cout << "=======================================" << endl;
    cout <<" 1. Nur Alamsyah                  \n"<< endl;
    cout <<" 2. Haldi Budiman                 \n" << endl;
    cout <<" 3. Yusri Ikhwani               \n" << endl;
    cout <<" 4. Dessy wundandari                 \n" << endl;
    cout <<" 5. Ivah Aprianti                 \n" << endl;

    cout<< "Staf Pengajar Pemograman C++ :";
    cin>>pilihan;
    cout << endl;

    switch (pilihan)

    {
case 1:
        cout << "Pilihan anda benar \n" <<endl;
        break;
    case 2:
        cout << "Pilihan anda benar \n" <<endl;
        break;
    case 3:
        cout<< "Pilihan anda salah \n" << endl;
        break;
    case 4:
        cout << "Pilihan anda salah \n" << endl;
        break;
    case 5:
        cout << "Pilihan anda benar \n" << endl;
        break;
    default:
        cout<< "Pilihan anda tidak ada didalam dafar \n \n";
    }
    return 0;

    }
