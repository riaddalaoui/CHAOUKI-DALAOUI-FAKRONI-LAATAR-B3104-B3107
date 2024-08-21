/*************************************************************************
                           Logs  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Logs> (fichier Logs.h) ----------------
#if ! defined ( LOGS_H )
#define LOGS_H

//--------------------------------------------------- Interfaces utilisées
#include "LogRow.h"
#include <fstream>
#include <regex>
#include <string>
using namespace std;
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Logs>
//
//
//------------------------------------------------------------------------

class Logs //: public ifstream
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    static LogRow GetNextLogRow ( istream & is );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------- Surcharge d'opérateurs
    //Logs & operator >> ( const Logs & unLogs );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    // Logs ( const Logs & unLogs );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Logs ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Logs ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <Logs>

#endif // LOGS_H

