#ifndef IOBSERVER_HH
#define IOBSERVER_HH

/*!
* \file IHTTPMes.hh
* \brief Interface des messages
* \author cristi_a
* \version 0.54
*/

/*! \namespace APITreeFriends
*   
* Espace de nommage regroupant la totalité des classes
* de l'api
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
   * Le IObserver contiendra les IRunables de chaque IModule.
   */
  class IObserver
  {
  public:
    /*! \brief Virtual Destructeur
    */
    virtual ~IObserver() {}
  };
}

#endif