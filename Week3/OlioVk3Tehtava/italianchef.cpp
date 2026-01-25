#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string chefName):Chef(chefName)
{
    cout<<"ItalianChef "<<chefName<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef destructor"<<endl;
}

bool ItalianChef::askSecret(string salasana, int jauho, int vesi)
{
    if ((password.compare(salasana)) == 0) {
        cout << "String Matched"<< endl;
        makepizza(jauho, vesi);
        return true;
    }
    else{
        cout << "String Not Matched" << endl;
        return false;
    }
}

int ItalianChef::makepizza(int jauho, int vesi)
{
    jauho = jauho / 5;
    vesi = vesi / 5;
    int annos = min(jauho, vesi);
    cout<<"Pizzaa voidaan tehda: "<<annos<<endl;
    return annos;
}
