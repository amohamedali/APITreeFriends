#include "Log.hh"

using namespace APITreeFriends;

Log::Log() {
  hookinet[POST_CONNECTION] = new LogPostConnection();
  hookinet[PRE_SEND] = new LogPreSend();
}

Log::~Log() {
  delete hookinet[POST_CONNECTION];
  delete hookinet[PRE_SEND];
}

const std::map<eHook, IRunnable *>      &Log::plug() const {
  return (hookinet);
}
