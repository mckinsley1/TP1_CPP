//
//  EmployePonctuel.hpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-26.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#ifndef EmployePonctuel_hpp
#define EmployePonctuel_hpp

#include <stdio.h>
#include "Employee.hpp"

class EmployeePonctuel : public Employee {
private:
    int montantUnique;
public:
    EmployeePonctuel(string nomDeFamille, int numeroDeMatricule, int montantUnique);
    void setMontantUnique(int montantUnique);
    double calculPaie();
};

#endif /* EmployePonctuel_hpp */
