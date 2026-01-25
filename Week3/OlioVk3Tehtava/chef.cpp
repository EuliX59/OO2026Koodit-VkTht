#include "chef.h"

Chef::Chef(string chefName2)
{
    chefName = chefName2;
    cout<<"Chef constructor: "<<chefName<<endl;
}

Chef::~Chef()
{
    cout<<"Chef destructor"<<endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    int annos = aines / 5;
    cout<<"Ainesten maara: "<<aines<<" Annoksia on tullut: "<<annos<<endl;
    return annos;
}

int Chef::makeSoup(int aines)
{
    int annos = aines / 3;
    cout<<"Ainesten maara: "<<aines<<" Annoksia on tullut: "<<annos<<"\n"<<endl;
    return annos;
}
