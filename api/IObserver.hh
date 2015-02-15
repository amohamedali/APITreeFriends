#ifndef IOBSERVER_HH
#define IOBSERVER_HH

namespace APITreeFriends
{
	enum eHook
	{
		POST_CONNECTION,
		PRE_PARSING,
		POST_PARSING,
		PRE_CONTENT,
		POST_CONTENT,
		PRE_SEND
	};

	class IObserver
	{
	public:
		virtual ~IObserver() {}
		
	};
}

#endif