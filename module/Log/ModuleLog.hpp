//
// test.hpp for log zia in /home/thuls/work/zia
//
// Made by Valentin LE MOIGNE
// Login   <lemoig_v@epitech.net>
//
// Started on  Sat Feb 14 11:57:21 2015 Valentin LE MOIGNE
// Last update Sun Feb 15 17:20:19 2015 Valentin LE MOIGNE
//

#ifndef LOG_H_
# define LOG_H_

#include <iostream>
#include <fstream>

/*enum eHOOK {
  PRECONNECTION,
  POSTCONNEXION,
  POSTPARSING,
  POSTSEND
  };

class IRunable {

};

class IModule {

public:
  virtual ~IModule(){};
  virtual std::map<enum eHOOK, IRunable *> cancer;
  virtual std::map<enum eHOOK, IRunable *> 	plug();
};*/
/*
class Apitreemyass {
protected:
  std::string	rawRequest;
  std::string	Ip;
  std::string	statusCode;
  std::string	statusMes;

public:
  Apitreemyass() {
    Ip = std::string("192.0.0.1");
    rawRequest = std::string("GET http://google.com/monstrualpedoporn http1.1");
    statusCode = std::string("400");
    statusMes = std::string("YOUR MOTHER IS NOT FOUND");
  };
  ~Apitreemyass() {};
  std::string	get_request() const {
    return (this->rawRequest);
  };
  std::string	get_status_code() const {
    return (this->statusCode);
  };
};*/

class Log : public IModule {
private:
  IRunnable	*runpreco;
  IRunnable	*runpostend;
  std::map<eHOOK, IRunable *>	hook_my_ass;

public:
  Log();
  ~Log ();
  std::map<eHOOK, IRunable *> 	&plug() const;
};

class LogPostend : public IRunable {
private:
  const int	priority = 1000;
  std::ofstream	_myfile;
  time_t	_tm;
  struct tm	*_curtime;

public:
  LogPostend();
  ~LogPostend();
  void	run(IConnection &);
};

class LogPreconnexion : public IRunable {
private:
  const int	priority = 1;
  std::ofstream	_myfile;
  time_t	_tm;
  struct tm	*_curtime;

public:
  LogPreconnexion();
  ~LogPreconnexion();
  void	run(IConnection &);
};

#endif /* !LOG_H_ */
