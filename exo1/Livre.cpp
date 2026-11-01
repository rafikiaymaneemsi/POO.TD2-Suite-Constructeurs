#include <iostream>
#include "Livre.h"

int Livre::compteur = 0;

Livre::Livre ()
{
    this->code = ++compteur;
    this->titre = "Titre par defaut";
    this->pages = 0;
}

Livre::Livre (int code, std::string titre, int pages)
{
    this->code = code;
    this->titre = titre;
    this->pages = pages;
}

double Livre::prixCopie (){
    double prix = this->pages * 0.5;

    // le prix 7aydt menno 10 fl mya dyal la 
    // remise donc bqat 90
    if (this->pages >= 100 && this->pages <= 200)
        prix *= 0.90;
    // le prix 7aydt menno 25 fl mya dyal la 
    // remise donc bqat 75
    else if (this->pages > 200)
        prix *= 0.75;

    return prix;
}

void Livre::afficher()
{
    std::cout << "Code : " << this->code << std::endl;
    std::cout << "Titre : " << this->titre << std::endl;
    std::cout << "Nombre de pages : " << this->pages << std::endl;
    std::cout << "Prix de la copie : " << this->prixCopie() << " DH" << std::endl;
}