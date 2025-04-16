#include "Patient.h"
#include <iostream>

Patient::Patient(const std::string& n, const std::string& p, int a, const std::string& m, int num)
    : Personne(n, p, a), maladie(m), numero_chambre(num) {}
Patient::Patient() : Personne(), maladie(""), numero_chambre(0) {}
std::string Patient::getMaladie() const {
    return maladie;
}
int Patient::getNumeroChambre() const {
    return numero_chambre;
}
void Patient::setMaladie(const std::string& m) {
    maladie = m;
}
void Patient::setNumeroChambre(int num) {
    numero_chambre = num;
}
void Patient::affiche_infos() const {
    Personne::affiche_infos();
    std::cout << "Maladie: " << maladie << ", Numero de chambre: " << numero_chambre << std::endl;
}
