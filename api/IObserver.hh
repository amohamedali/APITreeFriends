#ifndef IOBSERVER_HH
#define IOBSERVER_HH

#include <list>
#include "IRunnable.hh"
/*!
* \file IHTTPMes.hh
* \brief Interface des messages
* \author cristi_a
* \version 0.54
*/

/*! \namespace APITreeFriends
*/
namespace APITreeFriends
{
  /*! \enum eHook
  *   \brief Enum des différents point de hook durant le traitement d'un IConnection 
  */
  enum eHook
  {
    POST_CONNECTION,
    PRE_PARSING,
    POST_PARSING,
    PRE_METHOD,
    POST_METHOD,
    PRE_CONTENT,
    POST_CONTENT,
    PRE_SEND
  };
  /*! \class IObserver
   * \brief Interface du moduleManager
   * Le IObserver contiendra les IRunnables de chaque IModule.
   */
  class IObserver
  {
  public:
    /*! \brief Virtual Destructeur
    */
    virtual ~IObserver() {}

    /*! \brief Renvoie la liste de runnable assignée à un hook
    *   \param eHook L'enum du hook correspondant
    *   \return std::list<IRunnable *> La liste de runnable de ce hook
    */
    virtual std::list<IRunnable *> &getRunnables(const eHook) const = 0;
  };
}

#endif