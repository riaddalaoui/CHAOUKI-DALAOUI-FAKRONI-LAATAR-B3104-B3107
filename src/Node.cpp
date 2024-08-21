/*************************************************************************
                           Xxx  -  description
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <Node> (fichier Node.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Node.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
// 
const string Node::GetName() const
{
    return name;
}

int Node::GetHits() const
{
    return hits;
}

int Node::GetId() const
{
    return id;
}

void Node::AddReferer(const Referer& unReferer)
{
    if (referers.find(unReferer) != referers.end())
    {
        referers[unReferer] += 1;
    }
    else
    {
        referers[unReferer] =  1;
    }
}

void Node::AddReferer(const Node& unNode)
{
    for (auto const & i : unNode.referers)
    {
        this->AddReferer(i.first);
    }
}


//------------------------------------------------- Surcharge d'operateurs


//-------------------------------------------- Constructeurs - destructeur
Node::Node ()
{
#ifdef MAP
    cout << "Appel au constructeur de <Node>" << endl;
#endif
    name = "_";
    hits = 0;
    id = 0;
} //----- Fin de Node

Node::Node ( const Node & unNode )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Node>" << endl;
#endif
    id = unNode.id;
    name = unNode.name;
    hits = unNode.hits;
    for (auto const & i : unNode.referers)
    {
        referers[ i.first ] = i.second ;
    }
} //----- Fin de Node (constructeur de copie)

Node::Node ( const Referer unReferer )
{
#ifdef MAP
    cout << "Appel au constructeur de <Node>" << endl;
#endif
    name = unReferer;
    hits = 0;
    id = 0;
} //----- Fin de Node

Node::Node (const Cible & uneCible, const Referer & unReferer )
{ 
#ifdef MAP
    cout << "Appel au constructeur de <Node>" << endl;
#endif
    name = uneCible;
    hits = 1;
    id = 0;
    referers.insert( std::pair < Referer, int > ( unReferer, 1 ) );
} //----- Fin de Node

Node::~Node ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Node>" << endl;
#endif
} //----- Fin de ~Node
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

