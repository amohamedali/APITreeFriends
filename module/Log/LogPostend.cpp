#include "LogPostend.hh"

void    LogPostend::run(IConnection &data) {
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

int LogPostend::getPriority() const {
  return (this->priority);
}
