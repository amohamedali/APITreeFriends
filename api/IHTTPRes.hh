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
   * \class permettant de récupérer les donnés propre à la réponse
   * \présente dans la classe mère IHTTPMes
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
     * \return std::string &StatusCode
     */
    virtual std::string &getStatusCode() const = 0;
    /*!
     * \brief Getter du message relatif au status code de la réponse
     * \return std::string &StatusMes
     */
    virtual std::string &getStatusMes() const = 0;

    /*!
     * \brief Setter du statut code de la réponse
     * \param std::string &StatusCode
     */
    virtual void        setStatusCode(const std::string &) = 0;
    /*!
     * \brief Setter du message relatif au status code de la réponse
     * \param std;;string &StatusMes
     */
    virtual void        setStatusMes(const std::string &) = 0;
  };
}

#endif
