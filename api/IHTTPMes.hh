#ifndef IHTTPMES_HH_
#define IHTTPMES_HH_

/*!
* \file IHTTPMes.hh
* \brief Interface des messages
* \author cristi_a
* \version 0.34
*/

#include <string>
#include <map>

/*! \namespace APITreeFriends
*   
* espace de nommage regroupant la totalité des classes
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
       * \brief Constructeur virtuel
       */
      virtual ~IHTTPMes() {}
      /*!
       * \brief Getter de la map de headerField
       */
      virtual headerMap           &getHeader() const = 0;
      virtual std::string         &getBody() const = 0;
      virtual std::string         &getHTTPVersion() const = 0;

      virtual void                setHeader(const headerMap &) = 0;
      virtual void                setBody(const std::string &) = 0;
      virtual void                setHTTPVersion(const std::string &) = 0;

      virtual std::string         &getHeaderField(const std::string &) const = 0;
      virtual void                setHeaderField(const std::string &, const std::string &) = 0;
      virtual void                removeHeaderField(const std::string &) = 0;
  };
}

#endif