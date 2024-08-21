/*************************************************************************
                           Xxx  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <LogRow> (fichier LogRow.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <iostream>
#include <string>

//------------------------------------------------------ Include personnel
#include "LogRow.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
// 
LogRow::LogRow(const std::string& ip, const std::string& date, int heure, int minutes, int secondes, const std::string& requete_http, const int status, const int qtt_donnee_transferee,const std::string& refereur, const std::string& client_navigateur)
  : ip(ip), date(date), heure(heure),minutes(minutes),secondes(secondes), requete_http(requete_http), status(status), qtt_donnee_transferee(qtt_donnee_transferee), refereur(refereur), client_navigateur(client_navigateur)
  {
    
  }

std::string LogRow::get_ip() const 
{ 
  return ip; 
}

std::string LogRow::get_date() const 
{ 
  return date; 
}

int LogRow::get_heure() const 
{ 
  return heure; 
}

int LogRow::get_minutes() const 
{ 
  return minutes; 
}

int LogRow::get_secondes() const 
{ 
  return secondes; 
}

std::string LogRow::get_requete_http() const 
{ 
  return requete_http; 
}

int LogRow::get_status() const 
{ 
  return status;
}

int LogRow::get_qtt_donnee_transferee() const 
{ 
  return qtt_donnee_transferee; 
}

std::string LogRow::get_refereur() const 
{ 
  return refereur;
}

std::string LogRow::get_client_navigateur() const 
{ 
  return client_navigateur; 
}

std::string LogRow::get_extension() const
{
    size_t last_dot_pos = requete_http.find_last_of(".");
    if (last_dot_pos == std::string::npos || last_dot_pos + 1 >= requete_http.size()) {
        // Pas d'extension trouvée
        return "";
    }
    return requete_http.substr(last_dot_pos);
}

//------------------------------------------------- Surcharge d'operateurs


//-------------------------------------------- Constructeurs - destructeur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

