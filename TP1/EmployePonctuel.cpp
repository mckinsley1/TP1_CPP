//
//  EmployePonctuel.cpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-26.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#include "EmployePonctuel.hpp"

EmployeePonctuel::EmployeePonctuel(string nomDeFamille, int numeroDeMatricule, int montantUnique) : Employee(nomDeFamille, numeroDeMatricule) {
    this->montantUnique = montantUnique;
}

void EmployeePonctuel::setMontantUnique(int montantUnique) {
    this->montantUnique = montantUnique;
}

double EmployeePonctuel::calculPaie() {
    return montantUnique;
}
