/*************************************************************************
                           Xxx  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Node> (fichier Node.h) ----------------
#if ! defined ( NODE_H )
#define NODE_H

//--------------------------------------------------- Interfaces utilisees
using namespace std;
#include <iostream>
#include <map>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
typedef string Cible ; 
typedef string Referer ;
//------------------------------------------------------------------------
// Role de la classe <Node>
//
//
//------------------------------------------------------------------------

class Node
{
//----------------------------------------------------------------- PUBLIC
friend class Graph;
public:
//----------------------------------------------------- Methodes publiques
    // type Methode ( liste des parametres );
    // Mode d'emploi :
    //
    // Contrat :
    //
const string GetName() const;
int GetHits() const;
int GetId() const;
void AddReferer(const Referer& referer);
void AddReferer(const Node& unNode); 

//------------------------------------------------- Surcharge d'operateurs
   
//-------------------------------------------- Constructeurs - destructeur
explicit Node () ; // constructeur par defaut
Node ( const Node & unNode ) ; // constructeur de copie
Node ( const Referer ) ; // constructeur avec Referer
Node (const Cible & uneCible, const Referer & unReferer ) ; // constructeur avec Referer et Cible
virtual ~Node ( ) ; // destructeur
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges
    int id ; // id du noeud
    string name ; // nom du noeud
    map<Referer, int> referers ; // map des referers
    int hits ; // nombre de hits
};

//-------------------------------- Autres definitions dependantes de <Xxx>

#endif // NODE_H

