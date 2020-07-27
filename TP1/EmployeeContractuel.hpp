//
//  EmployeeContractuel.hpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-26.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#ifndef EmployeeContractuel_hpp
#define EmployeeContractuel_hpp

#include <stdio.h>
#include "Employee.hpp"

class EmployeeContractuel : public Employee {
private:
    int montantFixe;
    int nombreDeSemaine;
public:
    EmployeeContractuel(string nomDeFamille, int numeroDeMatricule, int montantFixe, int nombreDeSemaine);
    void setMontantFixe(int montantFixe);
    int getMontantFixe();
    
    void setNombreDeSemaine(int nombreDeSemaine);
    int getNombreDeSemaine();
    
    double calculPaie();
};

#endif /* EmployeeContractuel_hpp */
