#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
int a,b,c,sisa;
    cout<< "MENGUBAH BENTUK PECAHAN BIASA KE BENTUK PECAHAN CAMPURAN"<<endl;
    cout<< "Masukkan Pembilang = "; cin>>b;
    cout<< "Masukkan Penyebut  = "; cin>>c;
    cout<< "\nMaka Bentuk Pecahannya Adalah ="<<endl;
    cout<< " "<<b<<endl;
    cout<< " - "<<endl;
    cout<< " "<<c<<endl;

    a=b/c; sisa=b%c;
    cout<< "\nBentuk Pecahan Campurannya Adalah ="<<endl;
    cout<< "  " <<sisa <<endl; // ** ("2x spasi)
    cout<<a << " ";
    cout<< "-"<<endl;
    cout<< "  "<<c <<endl;
}
