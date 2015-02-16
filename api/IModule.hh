#ifndef IMODULE_HH_
#define IMODULE_HH_

/*! \mainpage My Personal Index Page
 *
 * \section intro_sec Introduction
 *
 * This is the introduction.
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Opening the box
 *
 * etc...
 */

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
* \brief Espace de nommage regroupant la totalité des classes
* de l'api
*/
namespace APITreeFriends
{
	/*! \class IModule
  *   \brief Interface d'implémentation des modules
  * 	Les IModule ne sont en définitive que des containers de IRunable.
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
     * Le module renvoie la map<eHook, IRunable*> spécifique au module
     * \return std::map<eHook, IRunable*> Map de plug du module
     */
    virtual std::map<eHook, IRunable *> &plug() const = 0;
  };
}

#endif