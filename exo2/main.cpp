#include <iostream>
#include "Segment.h"
int main(){

    Segment S(1,2,3,4);
    S.afficherExtremiter();
    std::cout << "Longueur du segment : " << S.calculeDistance() << std::endl;

    return 0;
}