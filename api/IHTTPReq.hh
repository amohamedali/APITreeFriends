#ifndef IHTTPREQ_HH_
#define IHTTPREQ_HH_

#include "IHTTPMes.hh"

namespace APITreeFriends
{
  class IHTTPReq : public IHTTPMes 
  {
  public:
    virtual ~IHTTPReq() {}
    
    virtual std::string &getMethod() const = 0;
    virtual std::string &getRessource() const = 0;

    virtual void        setMethod(const std::string &) const = 0;
    virtual void        setRessource(const std::string &) const = 0;
  
  };
}

#endif