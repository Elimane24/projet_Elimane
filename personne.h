#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <iostream>

class Personne {
private:
    std::string nom;
    std::string prenom;
    int age;
public:
    Personne(const std::string& n, const std::string& p, int a);
    Personne();
    std::string getNom() const;
    std::string getPrenom() const;
    int getAge() const;
    void setNom(const std::string& n);
    void setPrenom(const std::string& p);
    void setAge(int a);
    void se_presenter() const;
    virtual void affiche_infos() const;
};

#endif
