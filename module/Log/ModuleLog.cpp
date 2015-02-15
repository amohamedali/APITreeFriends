//
// test.cpp for log zia in /home/thuls/work/zia
//
// Made by Valentin LE MOIGNE
// Login   <lemoig_v@epitech.net>
//
// Started on  Sat Feb 14 11:54:28 2015 Valentin LE MOIGNE
// Last update Sun Feb 15 17:21:00 2015 Valentin LE MOIGNE
//

#include "ModuleLog.hpp"

using namespace std;

/*int main () {
  Log test;

test.logentry();
}*/

void	LogPreconnexion::run(IConnection &data) {
  this->_myfile << "In: " << getIp() << " - "
		<< "\"" << getrawReq() <<"\" "
		<< getstatutCode() << " "
		<< "\"" << getstatutMes() << "\" - "
		<< asctime(this->_curtime);
}

LogPreconnexion::LogPreconnexion() {
  this->_tm = time(NULL);
  _curtime = localtime ( &_tm );
  this->_myfile.open("log.txt", std::ios::in | std::ios::out | std::ios::app);
}

LogPreconnexion::~LogPreconnexion() {
  this->_myfile.close();
}

void	LogPostend::run(IConnection &data) {
  this->_myfile << "Out: "  << getIp() << " - "
		<< "\"" << getrawReq() <<"\" "
		<< getstatutCode() << " "
		<< "\"" << getstatutMes() << "\" - "
		<< asctime(this->_curtime);
}

LogPostend::LogPostend() {
  this->_tm = time(NULL);
  _curtime = localtime ( &_tm );
  this->_myfile.open("log.txt", std::ios::in | std::ios::out | std::ios::app);
}

LogPostend::~LogPostend() {
  this->_myfile.close();
}

Log::~Log() {
  delete bullshit;
}

Log::Log() {
  runpostend = new LogPostend;
  runpreco = new LogPreconnexion;
  hook_my_ass[POST_CONNEXION] = runpreco;
  hook_my_ass[PRE_SEND] = runpostend;
}

std::map<enum eHOOK, IRunable *>      Log::&plug() const {
  return (hook_my_ass);
}
