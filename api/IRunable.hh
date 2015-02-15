#ifndef IRUNABLE_HH_
#define IRUNABLE_HH_

namespace APITreeFriends
{
  class IRunable
    {
    public:
      IRunable();
      ~IRunable();
      
      void run(IConnection &);
    };  
};

#endif