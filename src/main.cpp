#include <iostream>
#include <map>
#include "Logs.h" 
#include "LogRow.h"  
#include "Graphe.h"  

using namespace std;

int main(int argc, char *argv[]) {

    //Ne sers à rien puisqu'il a déjà rempli ses arguments dans l'appelle de la fonction main mdrrrrrrrrr
    cout<< '\n' << "Auteurs : CHAOUKI Youssef, DALAOUI Riad, FAKRONI Mohamed et LAATAR Youssef" << '\n' << endl;
    cout<< '\n' << "Bienvenue dans le programme d'analyse d'un fichier de log." << '\n' << endl;
    cout << "Options disponibles :" << endl;
    cout<< '\t' << "-g <nom du fichier> : Génère un fichier Dot à partir du graphe." << endl;
    cout << '\t' << "-e : Exclut les extensions des fichiers de type image, css ou javascript." << endl;
    cout << '\t' << "-t <heure> : Filtre les logs à partir d'une heure donnée." << endl;
    cout << endl;

    string filename;
    string generateDotFile;
    bool excludeExtensions = false;
    string timeFilter;

    
    for (int i = 1; i < argc; ++i) {
        string arg = argv[i];
        if (arg == "-g") {
            if (i + 1 < argc) {
                generateDotFile = argv[i + 1];
                i++;  
            } else {
                cerr << "Erreur : L'option -g nécessite un nom de fichier Dot en argument." << endl;
                cerr << "Usage fonctionnel : -g <nomfichier>.dot" << endl;
                return 1;
            }
        } else if (arg == "-e") {
            excludeExtensions = true;
        } else if (arg == "-t") {
            if (i + 1 < argc) {
                timeFilter = argv[i + 1];
                i++; 
            } else {
                cerr << "Erreur : L'option -t nécessite une valeur d'heure en argument." << endl;
                cerr << "Usage fonctionnel : -t <heures>" << endl;
                return 1;
            }
        } else {
            filename = arg;
        }
    }

    if (filename.empty()) {
        cerr << "Erreur : Veuillez spécifier le nom du fichier de log." << endl;
        return 1;
    }


    return 0;
}
