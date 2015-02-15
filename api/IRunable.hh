#ifndef IRUNABLE_HH_
#define IRUNABLE_HH_

#include "IConnection.hh"

namespace APITreeFriends
{
  class IRunable
    {
    public:
      virtual ~IRunable() {}
      
      virtual int   getPriority() const = 0;
      virtual void  run(IConnection &) = 0;
    };  
};

#endif