#include "LogPostConnexion.cpp"

void    LogPostConnexion::run(IConnection &data) {
  this->_myfile << "In: " << data.getIp() << " - "
		<< "\"" << data.getrawReq() <<"\" "
		<< data.getstatutCode() << " "
		<< "\"" << data.getstatutMes() << "\" - "
		<< asctime(this->_curtime);
}

LogPostConnexion::LogPostConnexion() {
  this->_tm = time(NULL);
  _curtime = localtime ( &_tm );
  this->_myfile.open("log.txt", std::ios::in | std::ios::out | std::ios::app);
}

LogPostConnexion::~LogPostConnexion() {
  this->_myfile.close();
}

int LogPostConnexion::getPriority() const {
  return (this->priority);
}
