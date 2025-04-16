#include "Medecin.h"
#include <iostream>

Medecin::Medecin(const std::string& n, const std::string& p, int a, const std::string& s, double sal)
    : Personne(n, p, a), specialite(s), salaire(sal) {}
Medecin::Medecin() : Personne(), specialite(""), salaire(0) {}
std::string Medecin::getSpecialite() const {
    return specialite;
}
double Medecin::getSalaire() const {
    return salaire;
}
void Medecin::setSpecialite(const std::string& s) {
    specialite = s;
}
void Medecin::setSalaire(double sal) {
    salaire = sal;
}
void Medecin::affiche_infos() const {
    Personne::affiche_infos();
    std::cout << "Specialite: " << specialite << ", Salaire: " << salaire << " FCFA" << std::endl;
}
