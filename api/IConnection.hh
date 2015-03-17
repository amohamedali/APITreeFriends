#ifndef ICONNECTION_HH_
#define ICONNECTION_HH_

/*!
 * \file IConnection.hh
 * \brief Main object
 * \author lemoig_v
 * \version 21
 */

#include "IHTTPReq.hh"
#include "IHTTPRes.hh"

/*! \namespace APITreeFriends
 *
 * Espace de nommage regroupant la totalité des classes
 * de l'api
 */
namespace APITreeFriends
{
  /*! \enum eConnectionState
   * \brief Enum des états possibles de connection
*/
  enum eConnectionState
  {
    CONTINUE,
    CLOSE_FD,
    STOP
  };

  /*! \class IConnection
   * \brief Classe contenant les données concernant la connexion, la requète, et la réponse
   */
  class IConnection
    {
    public:
      /*!
       * \brief Destructeur virtuel
       */
      virtual ~IConnection() {}
      /*!
       * \brief Getter du socket du client
       * \return int , File descriptor
       */
      virtual int                 getSocket() const = 0;
      /*!
       * \brief Getter du port utilisé du coté du client
       * \return short , Port du client
       */
      virtual short                 getPort() const = 0;
      /*!
       * \brief Getter de l'état de connection (eConnectionState)
       * \return eConnectionState , enum représentant l'état de la connexion
       */
      virtual eConnectionState      getState() const = 0;
      /*!
       * \brief Getter de la requète brut (startline + header + body)
       * \return std::string & , requète brute
       */
      virtual std::string           &getRawReq()  const = 0;
      /*!
       * \brief Getter de l'IP du client
       * \return std::string & , IP du client
       */
      virtual std::string           &getIp() const = 0;
      /*!
       * \brief Getter de la requète sous forme de IHTTPReq
       * \return IHTTPReq & , objet contenant les informations concernant la requète
       */
      virtual IHTTPReq              &getReq() const = 0;
      /*!
       * \brief Getter de la réponse sous forme de IHTTPRes
       * \return IHTTPRes & , objet contenant les informations concernant la réponse
       */
      virtual IHTTPRes              &getRes() const = 0;

      /*!
       * \brief Setter du Port du client
       * \param short Nouveau Port client
       */
      virtual void                  setPort(const short) = 0;
      /*!
       * \brief Setter de l'état de connexion
       * \param eConnectionState Nouvel état de connexion
       */
      virtual void                  setState(const eConnectionState) = 0;
      /*!
       * \brief Setter de la requète brute
       * \param std::string & , Requète brut
       */
      virtual void                  setRawReq(const std::string &) = 0;
      /*!
       * \brief Setter de l'IP du client
       * \param std::string Nouvel IP client
       */
      virtual void                  setIp(const std::string &) = 0;
    };
}

#endif
