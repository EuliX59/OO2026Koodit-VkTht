#include "pankkitili.h"

Pankkitili::Pankkitili(string) {}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double s)
{
    if(s < 0) {
        cout<<"Ei negatiivisia talletuksia"<<endl;
        return false;
    }
    else {
        saldo = saldo + s;
        return true;
    }
}

bool Pankkitili::withdraw(double n)
{
    if(saldo >= n) {
        saldo = saldo - n;
        return true;
    }
    else {
        cout<<"Tilin saldo ei riita"<<endl;
        return false;
    }
}

