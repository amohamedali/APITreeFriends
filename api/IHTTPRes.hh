#ifndef IHTTPRES_HH_
#define IHTTPRES_HH_

#include "IHTTPMes.hh"

namespace APITreeFriends
{
  class IHTTPRes : public IHTTPMes
  {
  public:
    virtual ~IHTTPRes() {}
    virtual std::string &getStatusCode() const = 0;
    virtual std::string &getStatusMes() const = 0;

    virtual void        setStatusCode(const std::string &) = 0;
    virtual void        setStatusMes(const std::string &) = 0;
  };
}

#endif