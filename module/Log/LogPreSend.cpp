#include "LogPreSend.hh"

void    LogPreSend::run(APITreeFriends::IConnection &data) {
  _myfile << "Out: "  << data.getIp() << " - "
		<< "\"" << data.getRawReq() <<"\" "
		<< data.getRes().getStatusCode() << " "
		<< "\"" << data.getRes().getStatusMes() << "\" - "
		<< asctime(_curtime);
}

LogPreSend::LogPreSend() {
  priority = 1000;
  _tm = time(NULL);
  _curtime = localtime ( &_tm );
  _myfile.open("log.txt", std::ios::in | std::ios::out | std::ios::app);
}

LogPreSend::~LogPreSend() {
  _myfile.close();
}

int LogPreSend::getPriority() const {
  return (priority);
}
