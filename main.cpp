#include <iostream>
#include "Medecin.h"
#include "Patient.h"

int main() {
    Medecin med("Diouf", "Elimane", 25, "Cardiologue", 800000);
    Patient pat("Thioye Diene", "Binetou", 22, "Grippe", 12);
    std::cout << "--- Medecin ---" << std::endl;
    med.se_presenter();
    med.affiche_infos();
    std::cout << "\n--- Patient ---" << std::endl;
    pat.se_presenter();
    pat.affiche_infos();

    return 0;
}
