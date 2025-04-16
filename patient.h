#ifndef PATIENT_H
#define PATIENT_H

#include "Personne.h"

class Patient : public Personne {
private:
    std::string maladie;
    int numero_chambre;
public:
    Patient(const std::string& n, const std::string& p, int a, const std::string& m, int num);
    Patient();
    std::string getMaladie() const;
    int getNumeroChambre() const;
    void setMaladie(const std::string& m);
    void setNumeroChambre(int num);
    void affiche_infos() const override;
};

#endif
