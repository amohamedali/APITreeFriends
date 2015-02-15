#ifndef IHTTPMES_HH_
#define IHTTPMES_HH_

#include <string>
#include <map>

namespace APITreeFriends
{
  typedef std::map<std::string, std::string> headerMap;
  class IHTTPMes
  {
    public:
      virtual ~IHTTPMes() {}
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