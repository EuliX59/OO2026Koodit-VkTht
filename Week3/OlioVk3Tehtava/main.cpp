#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef kokki("Kokki");
    cout<<kokki.getName()<<endl;
    kokki.makeSalad(15);
    kokki.makeSoup(13);

    ItalianChef italiankokki("Italialainen kokki");
    cout<<italiankokki.getName()<<endl;
    italiankokki.makeSalad(23);
    italiankokki.makeSoup(17);
    italiankokki.askSecret("aaa", 10, 20);
    italiankokki.askSecret("pizza", 10, 20);

    return 0;
}
