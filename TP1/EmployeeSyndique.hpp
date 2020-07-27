//
//  EmployeeSyndique.hpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-26.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#ifndef EmployeeSyndique_hpp
#define EmployeeSyndique_hpp

#include <stdio.h>
#include "Employee.hpp"

class EmployeeSyndique: public Employee {
private:
    double salaireHoraire;
    double nombreHeureTravailler;
public:
    EmployeeSyndique(string nomDeFamille, int numeroDeMatricule, double salaireHoraire, double nombreHeureTravailler);
    void setSalaireHoraire(double salaireHoraire);
    double getSalaireHoraire();
    
    void setNombreHeureTravailler(double nombreHeureTravailler);
    double getNombreHeureTravailler();
    
};

#endif /* EmployeeSyndique_hpp */
