#include "luottotili.h"

Luottotili::Luottotili(string s, double l): Pankkitili(s)
{

}

bool Luottotili::deposit(double s)
{
    if(s < 0) {
        cout<<"Ei negatiivisia talletuksia"<<endl;
        return false;
    }
    if(saldo + s > 0) {
        cout<<"Luottotilin saldo ei saa olla yli 0"<<endl;
        return false;
    }
    else {
        saldo = saldo + s;
        return true;
    }
}

bool Luottotili::withdraw(double n)
{
    if(0 > n) {
        cout<<"Negatiivisia nostoja ei voi tehda"<<endl;
        return false;
    }
    if(luottoRaja + saldo >= n) {
        saldo = saldo - n;
        return true;
    }
    else {
        cout<<"Tilin saldo ei riita"<<endl;
        return false;
    }
}
