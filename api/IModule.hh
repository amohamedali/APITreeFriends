#ifndef IMODULE_HH_
#define IMODULE_HH_

/*!
* \file IModule.hh
* \brief Interface d'implémentation des modules
* \author cristi_a
* \version 0.23
*/

#include "IObserver.hh"
#include "IRunnable.hh"
#include <map>

/*! \namespace APITreeFriends
*/
namespace APITreeFriends
{
	/*! \class IModule
  *   \brief Interface d'implémentation des modules
  * 	Les IModule ne sont en définitive que des containers de IRunnable.
  */
  class IModule
  {
  public:
  	/*!
     * \brief Destructeur virtuel
     */
    virtual ~IModule() {}
    /*!
     * \brief Getter de la map de hook du Module
     * Le module renvoie la map<eHook, IRunnable*> spécifique au module
     * \return std::map<eHook, IRunnable*> Map de plug du module
     */
    virtual std::map<eHook, IRunnable *> &plug() const = 0;
  };
}

#endif