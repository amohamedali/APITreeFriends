#ifndef ICONNECTION_HH_
#define ICONNECTION_HH_

#include "IHTTPReq.hh"
#include "IHTTPRes.hh"

namespace APITreeFriends
{
	enum eConnectionState
	{
		CONTINUE,
		CLOSE_FD,
		STOP
	};

	class IConnection
		{
		public:
			virtual ~IConnection() {}
			virtual	short									getPort() const = 0;
			virtual	eConnectionState			getState() const = 0;
			virtual	std::string 					&getRawReq()	const = 0;
			virtual	std::string 					&getIp() const = 0;
			virtual IHTTPReq 							&getReq() const = 0;		
			virtual IHTTPRes 							&getRes() const = 0;
		
			virtual void									setPort(const short) = 0;
			virtual void									setState(const eState) = 0;
			virtual void									setRawReq() = 0;
			virtual void									setIp() = 0;
		};	
}

#endif