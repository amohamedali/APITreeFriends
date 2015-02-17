#include "LogPostConnection.hh"

void    LogPostConnection::run(APITreeFriends::IConnection &data) {
  _myfile << "In: " << data.getIp() << " - "
		<< "\"" << data.getRawReq() <<"\" "
		<< data.getRes().getStatusCode() << " "
		<< "\"" << data.getRes().getStatusMes() << "\" - "
		<< asctime(_curtime);
}

LogPostConnection::LogPostConnection() {
  priority = 1000;
  _tm = time(NULL);
  _curtime = localtime ( &_tm );
  _myfile.open("log.txt", std::ios::in | std::ios::out | std::ios::app);
}

LogPostConnection::~LogPostConnection() {
  _myfile.close();
}

int LogPostConnection::getPriority() const {
  return (priority);
}
