//
//  EmployeeSyndique.cpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-26.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#include "EmployeeSyndique.hpp"
#include <string>

EmployeeSyndique::EmployeeSyndique(string nomDeFamille, int numeroDeMatricule, double salaireHoraire, double nombreHeureTravailler) : Employee(nomDeFamille, numeroDeMatricule) {
    this->salaireHoraire = salaireHoraire;
    this->nombreHeureTravailler = nombreHeureTravailler;
}

void EmployeeSyndique::setSalaireHoraire(double salaireHoraire) {
    this->salaireHoraire = salaireHoraire;
}

double EmployeeSyndique::getSalaireHoraire() {
    return salaireHoraire;
}

void EmployeeSyndique::setNombreHeureTravailler(double nombreHeureTravailler) {
    this->nombreHeureTravailler = nombreHeureTravailler;
}

double EmployeeSyndique::getNombreHeureTravailler() {
    return nombreHeureTravailler;
}
