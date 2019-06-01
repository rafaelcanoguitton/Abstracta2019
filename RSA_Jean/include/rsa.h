#ifndef RSA_H
#define RSA_H
#include <sstream>
#include <NTL/ZZ.h>
#include <iostream>
#include "string"
#include <cstdlib>

using namespace std;
using namespace NTL;

class rsa{
    public:

        rsa();
        ZZ get_p();
        ZZ get_q();
        string get_n();
        string get_e();

        string cifrado(string);
        string descifrado(string);
        rsa(string e_, string n_);

    private:
      string alf="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-";
      int tam_array;
      ZZ p;
      ZZ q;
      int bits;
      ZZ n;
      string n_string;
      string mensaje_con_0;
      int n_string_tam;
      ZZ phi_n;
      ZZ e;
      ZZ d;

};

#endif // RSA_H
