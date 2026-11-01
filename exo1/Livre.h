#include <iostream>

class Livre {
private:
    int code;
    std::string titre;
    int pages;
    static int compteur;
    
public:
    Livre();
    Livre(int, std::string, int);
    double prixCopie();
    void afficher();
};