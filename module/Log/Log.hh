#ifndef LOG_H_
# define LOG_H_

/*!
 * \file Log.hh
 * \author lemoig_v
 * \version 21
 */

#include <iostream>
#include <fstream>
#include "IConnection.hh"
#include "IModule.hh"
#include "LogPostConnection.hh"
#include "LogPreSend.hh"

/*!
 * \class Log
 * \brief Classe contenant la map des hooks où intervient Log, aindi que les IRunnable s associés à ces hooks, Herite de IModule
 */
class Log : public APITreeFriends::IModule {
private:
  std::map<APITreeFriends::eHook, APITreeFriends::IRunnable *>	hookinet;

public:
  /*!
   * \brief Constructeur, initialise la map de hooks et les IRunnable s correspondants
   */
				Log();
  /*!
   * \brief Destructeur, détruit les IRunnable s
   */
				~Log ();
  /*
   * \briefb Getter de la map de Hook et d'IRunnable
   * \return std::map<eHook, IRunnable *> & , la map de Hook et d'IRunnable
   */
  const std::map<APITreeFriends::eHook, APITreeFriends::IRunnable *> 	&plug() const;
};

#endif /* !LOG_H_ */
