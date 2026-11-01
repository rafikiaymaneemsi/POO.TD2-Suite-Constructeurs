#include <iostream>
#include "Livre.cpp"

int main ()
{

    Livre L1;
    Livre L2(100, "Rafiki Aymane", 150);
    Livre* L3 = new Livre();

    std::cout << L1.prixCopie();
    std::cout << L2.prixCopie();
    std::cout << L3->prixCopie();

    L1.afficher();
    L2.afficher();
    L3->afficher();

    delete L3;

    return 0;
}