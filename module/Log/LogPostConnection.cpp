#include "LogPostConnection.cpp"

void    LogPostConnection::run(IConnection &data) {
  this->_myfile << "In: " << data.getIp() << " - "
		<< "\"" << data.getRawReq() <<"\" "
		<< data.getRes().getStatusCode() << " "
		<< "\"" << data.getstatutMes() << "\" - "
		<< asctime(this->_curtime);
}

LogPostConnection::LogPostConnection() {
  this->_tm = time(NULL);
  _curtime = localtime ( &_tm );
  this->_myfile.open("log.txt", std::ios::in | std::ios::out | std::ios::app);
}

LogPostConnection::~LogPostConnection() {
  this->_myfile.close();
}

int LogPostConnection::getPriority() const {
  return (this->priority);
}
