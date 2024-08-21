/*************************************************************************
                           Xxx  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <LogRow> (fichier LogRow.h) ----------------
#if ! defined ( LOGRow_H )
#define LOGRow_H
#include <iostream>
#include <string>
//--------------------------------------------------- Interfaces utilisees

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <LogRow>
//
//
//------------------------------------------------------------------------

class LogRow
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques

  LogRow(const std::string& ip, const std::string& date, int heure, int minutes, int secondes, const std::string& requete_http, const int status, int qtt_donnee_transferee,const std::string& refereur, const std::string& client_navigateur);

  std::string get_ip() const;
  std::string get_date() const;
  int get_heure() const;
  int get_minutes() const;
  int get_secondes() const;

  std::string get_requete_http() const;
  int get_status() const;
  int get_qtt_donnee_transferee() const;
  std::string get_refereur() const;
  std::string get_client_navigateur() const;
  std::string get_extension() const;

//------------------------------------------------- Surcharge d'operateurs
   
//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges
  std::string ip;
  std::string date;
  int heure;
  int minutes;
  int secondes;
  std::string requete_http;
  int status;
  int qtt_donnee_transferee;
  std::string refereur;
  std::string client_navigateur;

};

//-------------------------------- Autres definitions dependantes de <Xxx>

#endif // LOGRow_H

