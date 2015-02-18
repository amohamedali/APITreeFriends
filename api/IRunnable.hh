#ifndef IRunnable_HH_
#define IRunnable_HH_

/*!
* \file IRunnable.hh
* \brief Interface d'exécutiondes des modules
* \author menard_s
* \version 0.34
*/

#include "IConnection.hh"

/*! \namespace APITreeFriends
*/
namespace APITreeFriends
{
  /*! \class IRunnable
  *   \brief Classe représentant la gestion d'exécution par priorité des modules
  */
  class IRunnable
    {
    public:
    /*!
    * \brief Constructeur virtuel
    */
      virtual ~IRunnable() {}
      /*!
      * \brief Exécution du module associé à la requête
      * \param connection IConnection & Variable contenant les informations d'une requête
      */
      virtual void  run(IConnection &) = 0;
    };  
};

#endif
