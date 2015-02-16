#ifndef IMODULE_HH_
#define IMODULE_HH_

/*!
* \file IModule.hh
* \brief Interface d'implémentation des modules
* \author cristi_a
* \version 0.23
*/

#include "IObserver.hh"
#include "IRunable.hh"
#include <map>

/*! \namespace APITreeFriends
*   
* Espace de nommage regroupant la totalité des classes
* de l'api
*/
namespace APITreeFriends
{
  class IModule
  {
  public:
  	/*!
     * \brief Destructeur virtuel
     */
    virtual ~IModule() {}
    /*!
     * \brief Getter de la map de hook du Module
     * Le module renvoie la map de eHook, IRunable, 
     * 
     * \return std::string body
     */
    virtual std::map<eHook, IRunable *> &plug() const = 0;
  };
}

#endif