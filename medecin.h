#ifndef MEDECIN_H
#define MEDECIN_H

#include "Personne.h"

class Medecin : public Personne {
private:
    std::string specialite;
    double salaire;
public:
    Medecin(const std::string& n, const std::string& p, int a, const std::string& s, double sal);
    Medecin();
    std::string getSpecialite() const;
    double getSalaire() const;
    void setSpecialite(const std::string& s);
    void setSalaire(double sal);
    void affiche_infos() const override;
};

#endif
