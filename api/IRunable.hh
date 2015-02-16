#ifndef IRUNABLE_HH_
#define IRUNABLE_HH_

/*!
* \file IRunable.hh
* \brief Interface d'exécutiondes des modules
* \author menard_s
* \version 0.34
*/

#include "IConnection.hh"

/*! \namespace APITreeFriends
*
* espace de nommage regroupant la totalité des classes
* de l'api
*/
namespace APITreeFriends
{
  /*! \class IRunable
  *   \brief Classe représentant la gestion d'exécution par priorité des modules
  */
  class IRunable
    {
    public:
    /*!
    * \brief Constructeur virtuel
    */
      virtual ~IRunable() {}
      /*!
      * \brief Getter de la priorité du module associé
      * \return int, Retourne un nombre entre 1 et 100 représentant la priorité
      */
      virtual int   getPriority() const = 0;
      /*!
      * \brief Exécution du module associé à la requête
      * \param connection IConnection & Variable contenant les informations d'une requête
      */
      virtual void  run(IConnection &) = 0;
    };  
};

#endif
