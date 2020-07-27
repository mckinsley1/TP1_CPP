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
    
    if (numeroDeMatricule <= 10000 & numeroDeMatricule >= 99999) {
        this->numeroDeMatricule = numeroDeMatricule;
    } else {
        std::cout << "Numero de matricule fournis invalide" << std::endl;
    }
    
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

void Employee::setImpotFederaux(double impotFed) {
    this->impotFederaux = impotFed;
}

double Employee::getImpotFederaux() {
    return impotFederaux;
}

void Employee::setImpotProvinciaux(double impotProv) {
    this->impotProvinciaux = impotProv;
}

double Employee::getImpotProvinciaux() {
    return impotProvinciaux;
}

double Employee::calculPaie(double salaireHoraire, double nombreHeureTravailler) {
    return salaireHoraire * nombreHeureTravailler;
}



