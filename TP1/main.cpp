//
//  main.cpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-22.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#include <iostream>
#include <string>
#include "Employee.hpp"
#include "EmployeeSyndique.hpp"
#include "EmployeeContractuel.hpp"
#include "EmployePonctuel.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "1. Ajouter unE employéE syndiqué" << endl;
    cout << "2. Ajouter unE employéE contractuel." << endl;
    cout << "3. Ajouter unE employéE ponctuel." << endl;
    cout << "4. Afficher le résultat de la paie pour les employéEs entréEs." << endl;
    cout << "5. Quitter le logiciel." << endl;
    
    int choix = 0;
    int count = 0;
    
    Employee *listeEmployee[250];
    
    while (choix != 5) {
        cout << "Entrer votre choix: " << endl;
        cin >> choix;
        
        switch (choix) {
            case 1: {
                cout << "Employe Syndique - Veuillez entrer le nom de famille: " << endl;
                string nomDeFamille;
                cin >> nomDeFamille;
                
                cout << "Veuillez entrer un numero de matricule entre 10000 et 99999: " << endl;
                int numeroDeMatricule;
                cin >> numeroDeMatricule;
                
                cout << "Veuillez entrer le salaire horaire: " << endl;
                double salaireHoraire;
                cin >> salaireHoraire;
                
                cout << "Veuillez entrer le nombre d'heure travailler: " << endl;
                double nombreHeureTravailler;
                cin >> nombreHeureTravailler;
                
                listeEmployee[count] = new EmployeeSyndique(nomDeFamille, numeroDeMatricule, salaireHoraire, nombreHeureTravailler);
                
                count++;
                
                break;
            }
            case 2: {
                cout << "Employe Contractuel - Veuillez entrer le nom de famille: " << endl;
                string nomDeFamille;
                cin >> nomDeFamille;
                
                cout << "Veuillez entrer un numero de matricule entre 10000 et 99999: " << endl;
                int numeroDeMatricule;
                cin >> numeroDeMatricule;
                
                cout << "Veuillez entrer le montant fixe: " << endl;
                int montantFixe;
                cin >> montantFixe;
                
                cout << "Veuillez entrer le nombre de semaine: " << endl;
                double nombreDeSemaine;
                cin >> nombreDeSemaine;
                
                listeEmployee[count] = new EmployeeContractuel(nomDeFamille, numeroDeMatricule, montantFixe, nombreDeSemaine);
                
                count++;
                break;
            }
            case 3: {
                cout << "Employe Ponctuel - Veuillez entrer le nom de famille: " << endl;
                string nomDeFamille;
                cin >> nomDeFamille;
                
                cout << "Veuillez entrer un numero de matricule entre 10000 et 99999: " << endl;
                int numeroDeMatricule;
                cin >> numeroDeMatricule;
                
                cout << "Veuillez entrer le montant fixe: " << endl;
                int montantUnique;
                cin >> montantUnique;
                
                listeEmployee[count] = new EmployeePonctuel(nomDeFamille, numeroDeMatricule, montantUnique);
                
                count++;
                break;
            }
            case 4:
                cout << "Choix 4" << endl;
                break;
            case 5:
                cout << "Choix 5" << endl;
                
                for(int i = 0; i < count; i++) {
                    cout << listeEmployee[i]->getNomDeFamille() << endl;
                    delete listeEmployee[i];
                }
                
                break;
            default:
                cout << "Votre choix n'est pas valide veuillez ressayez de nouveaux" << endl;
                break;
        }
    }
    
    return 0;
}
