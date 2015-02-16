#include "ModuleLog.hpp"

using namespace std; // sera retirer quand on compilera

Log::Log() {
  runpostend = new LogPostend;
  runpreco = new LogPreconnexion;
  hookinet[POST_CONNEXION] = runpreco;
  hookinet[PRE_SEND] = runpostend;
}

Log::~Log() {
  delete runpreco;
  delete runpostend;
}

std::map<enum eHOOK, IRunable *>      Log::&plug() const {
  return (hookinet);
}
