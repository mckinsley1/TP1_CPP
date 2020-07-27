//
//  main.cpp
//  TP1
//
//  Created by mckinsley apollon on 2020-07-22.
//  Copyright © 2020 mckinsleyapollon. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "1. Ajouter unE employéE syndiqué" << endl;
    cout << "2. Ajouter unE employéE contractuelle." << endl;
    cout << "3. Ajouter unE employéE ponctuelle." << endl;
    cout << "4. Afficher le résultat de la paie pour les employéEs entréEs." << endl;
    cout << "5. Quitter le logiciel." << endl;
    
    int choix = 0;
    
    while (choix != 5) {
        cout << "Entrer votre choix: " << endl;
        cin >> choix;
        
        switch (choix) {
            case 1:
                cout << "Choix 1" << endl;
                break;
            case 2:
                cout << "Choix 2" << endl;
                break;
            case 3:
                cout << "Choix 3" << endl;
                break;
            case 4:
                cout << "Choix 4" << endl;
                break;
            case 5:
                cout << "Choix 5" << endl;
                break;
            default:
                cout << "Votre choix n'est pas valide veuillez ressayez de nouveaux" << endl;
                break;
        }
    }
    
    return 0;
}
