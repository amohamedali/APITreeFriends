#include "LogPreSend.hh"

void    LogPreSend::run(IConnection &data) {
  this->_myfile << "Out: "  << data.getIp() << " - "
		<< "\"" << data.getRawReq() <<"\" "
		<< data.getRes().getStatusCode() << " "
		<< "\"" << data.getRes().getStatusMes() << "\" - "
		<< asctime(this->_curtime);
}

LogPreSend::LogPreSend() {
  this->_tm = time(NULL);
  _curtime = localtime ( &_tm );
  this->_myfile.open("log.txt", std::ios::in | std::ios::out | std::ios::app);
}

LogPreSend::~LogPreSend() {
  this->_myfile.close();
}

int LogPreSend::getPriority() const {
  return (this->priority);
}
