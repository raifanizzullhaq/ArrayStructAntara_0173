#include <iostream>
using namespace std;

struct Hewan
{
    string nama;
    string jenis;
    string habitat;
};

int main()
{
     //deklarasi variabel struct
    Hewan hewan ;
    //mengisi data
    cout << "Isikan nama : ";
    cin >> hewan.nama;
    cout << "Isikan jenis : ";
 cin >> hewan.jenis;
    cout << "Isikan habitat : ";
    cin >> hewan.habitat;
    cout << endl;
    cout << "Data Tampil" << endl;
    cout << "Nama : " << hewan.nama << endl;
    cout << "Jenis : " << hewan.jenis << endl;
    cout << "Habitat : " << hewan.habitat << endl;
}