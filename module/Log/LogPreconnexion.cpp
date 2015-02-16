#include "LogPreconnexion.cpp"

void    LogPreconnexion::run(IConnection &data) {
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

int LogPreconnexion::getPriority() const {
  return (this->priority);
}
