#ifndef IHTTPMES_HH_
#define IHTTPMES_HH_

/*!
* \file IHTTPMes.hh
* \brief Interface des messages
* \author cristi_a
* \version 0.54
*/

#include <string>
#include <map>

/*! \namespace APITreeFriends
*   
* Espace de nommage regroupant la totalité des classes
* de l'api
*/
namespace APITreeFriends
{
  /*! \class IHTTPMes
  *   \brief Classe représentant les block communs à la requête et à la reponse
  */
  class IHTTPMes
  {
    typedef std::map<std::string, std::string> headerMap;
    public:
      /*!
       * \brief Destructeur virtuel
       */
      virtual ~IHTTPMes() {}
      /*!
       * \brief Getter de la map de headerField
       * \return std::map<std::string, std::string> La map de header du message
       */
      virtual headerMap           &getHeader() const = 0;
      /*!
       * \brief Getter du content du message
       * \return std::string Le content du message
       */
      virtual std::string         &getBody() const = 0;
      /*!
       * \brief Getter de la HTTPVersion
       * \return std::string La version HTTP du message
       */
      virtual std::string         &getHTTPVersion() const = 0;
      /*!
       * \brief Setter de la map de headerField
       * \param headerMap Map de headerfield de type std::map<std::string, std::string>
       */
      virtual void                setHeader(const headerMap &) = 0;
      /*!
       * \brief Setter du content du message
       * \param Content Body du message de type std::string
       */
      virtual void                setBody(const std::string &) = 0;
      /*!
       * \brief Setter du la HTTPVersion
       * \param HTTPVersion Version HTTP du message de type std::string
       */
      virtual void                setHTTPVersion(const std::string &) = 0;
      /*!
       * \brief Getter d'un headerField value
       * \param headerKey Nom du header de type std::string
       * \return std::string Value d'un HeaderField
       */
      virtual std::string         &getHeaderField(const std::string &) const = 0;
      /*!
       * \brief Setter d'un headerField value
       * \param headerKey Nom du headerField de type std::string
       * \param headerValue Value du headerField de type std::string
       */
      virtual void                setHeaderField(const std::string &, const std::string &) = 0;
      /*!
       * \brief Supression d'un headerField
       * \param headerKey Nom du headerField de type std::string
       */
      virtual void                removeHeaderField(const std::string &) = 0;
  };
}

#endif