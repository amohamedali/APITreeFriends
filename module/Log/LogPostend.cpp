#include "LogPostSend.hh"

void    LogPostSend::run(IConnection &data) {
  this->_myfile << "Out: "  << getIp() << " - "
		<< "\"" << getrawReq() <<"\" "
		<< getstatutCode() << " "
		<< "\"" << getstatutMes() << "\" - "
		<< asctime(this->_curtime);
}

LogPostSend::LogPostSend() {
  this->_tm = time(NULL);
  _curtime = localtime ( &_tm );
  this->_myfile.open("log.txt", std::ios::in | std::ios::out | std::ios::app);
}

LogPostSend::~LogPostSend() {
  this->_myfile.close();
}

int LogPostSend::getPriority() const {
  return (this->priority);
}
