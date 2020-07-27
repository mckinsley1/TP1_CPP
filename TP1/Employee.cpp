//
//  Employee.cpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-25.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#include "Employee.hpp"
#include <string>
#include <iostream>


Employee::Employee(string nomDeFamille, int numeroDeMatricule) {
    this->nomDeFamille = nomDeFamille;
    this->numeroDeMatricule = numeroDeMatricule;
    this->impotFederaux = 0.15;
    this->impotProvinciaux = 0.15;

}

void Employee::setNomDeFamille(string nomDeFamille) {
    this->nomDeFamille = nomDeFamille;
}

string Employee::getNomDeFamille() {
    return nomDeFamille;
}

void Employee::setNumeroMatricule(int numeroMatricule) {
    this->numeroDeMatricule = numeroMatricule;
}

int Employee::getNumeroMatricule() {
    return numeroDeMatricule;
}

double Employee::getImpotFederaux() {
    return impotFederaux;
}

double Employee::getImpotProvinciaux() {
    return impotProvinciaux;
}

double Employee::calculPaie() {
    return 0;
}



