#ifndef IMODULE_HH_
#define IMODULE_HH_

#include "IObserver.hh"

namespace APITreeFriends
{
  class IModule
  {
  public:
    virtual ~IModule() {}
    virtual std::map<eHook, IRunable> plug() const = 0;
  };
}

#endif