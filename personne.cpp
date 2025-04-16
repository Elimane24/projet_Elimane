#include "Personne.h"

Personne::Personne(const std::string& n, const std::string& p, int a)
    : nom(n), prenom(p), age(a) {}
Personne::Personne() : nom(""), prenom(""), age(0) {}
std::string Personne::getNom() const {
    return nom;
}
std::string Personne::getPrenom() const {
    return prenom;
}
int Personne::getAge() const {
    return age;
}
void Personne::setNom(const std::string& n) {
    nom = n;
}
void Personne::setPrenom(const std::string& p) {
    prenom = p;
}
void Personne::setAge(int a) {
    age = a;
}
void Personne::se_presenter() const {
    std::cout << "Je suis : " << nom << " " << prenom << ", j'ai " << age << " ans." << std::endl;
}
void Personne::affiche_infos() const {
    std::cout << "Nom: " << nom << ", Prenom: " << prenom << ", Age: " << age << std::endl;
}
