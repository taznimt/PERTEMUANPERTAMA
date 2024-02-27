// PERTEMUANPERTAMA.cpp : This file contains the 'main' function. Program execution begins and ends there.
using namespace std;


#include <iostream>

int main()
{
    //Begin
    //numeric nAlas, nTinggi, nLuas
    //Display 'Masukkan Alas = ' 
    //Accept nAlas
    //Display 'Masukkan Tinggi = '
    //Accept nTinggi
    //Compute nLuas = nAlas*nTinggi/2
    //Display 'Luasnya = ' + nLuas
    //End

   
        float nAlas, nTinggi, nLuas;
        cout << "Masukan Alas = ";
        cin >> nAlas;
        cout << "Masukan Tinggi = ";
        cin >> nTinggi;
        nLuas = nAlas * nTinggi / 2;
        cout << "Luasnya = " << nLuas;

        int panjang, lebar, luas;
        cout << "Masukan Panjang = ";
        cin >> panjang;
        cout << "Masukan Lebar = ";
        cin >> lebar;
        nLuas = panjang * lebar;
        cout << "Panjangnya Persegi Panjang adalah = " << nLuas;


    }