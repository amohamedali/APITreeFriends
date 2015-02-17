#include "ModuleLog.hpp"

Log::Log() {
  hookinet[POST_CONNECTION] = new LogPostConnection();
  hookinet[PRE_SEND] = new LogPreSend();
}

Log::~Log() {
  delete hookinet[POST_CONNECTION];
  delete hookinet[PRE_SEND];
}

std::map<eHook, IRunnable *>      Log::&plug() const {
  return (hookinet);
}
