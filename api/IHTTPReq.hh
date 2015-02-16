#ifndef IHTTPREQ_HH_
#define IHTTPREQ_HH_

/*!
* \file IHTTPReq.hh
* \brief Interface des requêtes
* \author menard_s
* \version 0.34
*/

#include "IHTTPMes.hh"

/*! \namespace APITreeFriends
*
* espace de nommage regroupant la totalité des classes
* de l'api
*/
namespace APITreeFriends
{
  /*! \class IHTTPReq
  *   \brief Classe représentant les requêtes
  */
  class IHTTPReq : public IHTTPMes 
  {
  public:
  /*!
  * \brief Constructeur virtuel
  */
    virtual ~IHTTPReq() {}
    /*!
    * \brief Getter de la chaine de caractère de la méthode appelé
    * \return std::string &, Retourne une référence d'une string
    */
    virtual std::string &getMethod() const = 0;
    /*!
    * \brief Getter de la chaine de caractère de la ressource pointée
    * \return std::string &, Retourne une référence d'une string
    */
    virtual std::string &getRessource() const = 0;

    /*!
    * \brief Setter de la chaine de caractère de la méthode appelé
    * \param methode std::string & Variable modifiant la méthode de la requête
    */
    virtual void        setMethod(const std::string &) const = 0;
    /*!
    * \brief Setter de la chaine de caractère de la ressource pointée
    * \param ressource std::string &, Variable modifiant la ressource de la requête
    */
    virtual void        setRessource(const std::string &) const = 0;
  
  };
}

#endif
