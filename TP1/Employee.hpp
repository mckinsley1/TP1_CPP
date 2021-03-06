//
//  Employee.hpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-25.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Employee {
private:
    string nomDeFamille;
    int numeroDeMatricule;
    double impotFederaux;
    double impotProvinciaux;
public:
    Employee(string nomDeFamille, int numeroDeMatricule);
    void setNomDeFamille(string nomDeFamille);
    string getNomDeFamille();
    
    void setNumeroMatricule(int numeroMatricule);
    int getNumeroMatricule();
    
    void setImpotFederaux(double impotFed);
    double getImpotFederaux();
    
    void setImpotProvinciaux(double impotProv);
    double getImpotProvinciaux();
    
    double calculPaie(double salaireHoraire, double nombreHeureTravailler);
};


#endif /* Employee_hpp */
