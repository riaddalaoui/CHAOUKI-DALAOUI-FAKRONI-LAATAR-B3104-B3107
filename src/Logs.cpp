/*************************************************************************
                           Logs  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Logs> (fichier Logs.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Logs.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Logs::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
LogRow Logs::GetNextLogRow ( istream & is )
{
  string line;
  if (getline(is, line))
  {
    regex LogTemplate("^(\\S+) (\\S+) (\\S+) \\[([\\w/]+):(\\d{2}):(\\d{2}):(\\d{2})\\s[+\\-]\\d{4})\\] \"(\\S+) (.*?) (\\S+)\" (\\d{3}) (\\d+) \"(\\S+)\" \"([^\"]+)\"");
    smatch match;
    string ip;
    string date;
    int heure;
    int minutes;
    int secondes;
    string requete_http;
    int status;
    int qtt_donnee_transferee;
    string refereur;
    string client_navigateur;

    if (regex_search(line, match, LogTemplate))
    {
      ip = match[1];
      date = match[4];
      heure = stoi(match[5]);
      minutes = stoi(match[6]);
      secondes = stoi(match[7]);
      requete_http = match[9];
      status = stoi(match[11]);
      qtt_donnee_transferee = stoi(match[12]);
      refereur = match[14];
      client_navigateur = match[15];

      LogRow logRow(ip, date, heure, minutes, secondes, requete_http, status, qtt_donnee_transferee, refereur, client_navigateur);
      return logRow;
    }
  }
}

//------------------------------------------------- Surcharge d'opérateurs
/*Logs & Logs::operator << ( const Logs & unLogs )
// Algorithme :
//
{
} //----- Fin de operator =
*/

//-------------------------------------------- Constructeurs - destructeur
/*Logs::Logs ( const Logs & unLogs )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Logs>" << endl;
#endif
} //----- Fin de Logs (constructeur de copie)
*/

Logs::Logs ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Logs>" << endl;
#endif
} //----- Fin de Logs


Logs::~Logs ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Logs>" << endl;
#endif
} //----- Fin de ~Logs


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

