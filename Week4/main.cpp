#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

int main()
{
    Pankkitili Tili("Eeli");
    Tili.deposit(-10);
    Tili.deposit(100);
    Tili.withdraw(200);
    Tili.withdraw(50);
    cout<<"Tilin saldo on yhta suuri kuin: "<<Tili.getBalance()<<endl;

    Luottotili lTili("Eelia", 250);
    cout<<"\n\n"<<endl;
    cout<<"1"<<endl;
    lTili.deposit(-10);
    cout<<"2"<<endl;
    lTili.deposit(125);
    cout<<"3"<<endl;
    lTili.withdraw(500);
    cout<<"4"<<endl;
    lTili.withdraw(-750);
    cout<<"Tilin saldo on yhta suuri kuin: "<<lTili.getBalance()<<endl;
    cout<<"5"<<endl;
    lTili.withdraw(50);
    return 0;
}
