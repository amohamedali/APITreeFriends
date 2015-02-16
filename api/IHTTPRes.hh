#ifndef IHTTPRES_HH_
#define IHTTPRES_HH_

/*!
 * \file IHTTPRes.hh
 * \author cristi_a
 * \version 21
 */

#include "IHTTPMes.hh"

/*!
 *
 * espace de nommage regroupant la totalité des classes
 * de l'api
 */
namespace APITreeFriends
{
  /*! \class IHTTPRes
   * \brief Classe permettant de récupérer les donnés propre à la réponse présente dans la classe mère IHTTPMes
   */
  class IHTTPRes : public IHTTPMes
  {
  public:
    /*!
     * \brief Destructeur virtuel
     */
    virtual ~IHTTPRes() {}
    /*!
     * \brief Getter du status code de la réponse
     * \return std::string & , Status code actuel de la réponse sous forme de string
     */
    virtual std::string &getStatusCode() const = 0;
    /*!
     * \brief Getter du message relatif au status code de la réponse
     * \return std::string & , Message relatif au status code de la réponse, sous forme de string
     */
    virtual std::string &getStatusMes() const = 0;

    /*!
     * \brief Setter du statut code de la réponse
     * \param std::string &StatusCode, Nouveau statusCode sous forme de string
     */
    virtual void        setStatusCode(const std::string &) = 0;
    /*!
     * \brief Setter du message relatif au status code de la réponse
     * \param std;;string &StatusMes, Nouveau message relatif au status code de la réponse
     */
    virtual void        setStatusMes(const std::string &) = 0;
  };
}

#endif
