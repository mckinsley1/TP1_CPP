//
//  EmployeeContractuel.cpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-26.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#include "EmployeeContractuel.hpp"
#include <string>


EmployeeContractuel::EmployeeContractuel(string nomDeFamille, int numeroDeMatricule, int montantFixe, int nombreDeSemaine) : Employee(nomDeFamille, numeroDeMatricule) {
    this->montantFixe = montantFixe;
    this->nombreDeSemaine = nombreDeSemaine;
}

void EmployeeContractuel::setMontantFixe(int montantFixe) {
    this->montantFixe = montantFixe;
}

int EmployeeContractuel::getMontantFixe() {
    return montantFixe;
}

void EmployeeContractuel::setNombreDeSemaine(int nombreDeSemaine) {
    this->nombreDeSemaine = nombreDeSemaine;
}

int EmployeeContractuel::getNombreDeSemaine() {
    return nombreDeSemaine;
}

double EmployeeContractuel::calculPaie(int montantFixe, int nombreDeSemaine) {
    return montantFixe / nombreDeSemaine;
}
