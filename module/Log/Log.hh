#ifndef LOG_H_
# define LOG_H_

/*!
 * \file Log.hh
 * \author lemoig_v
 * \version 21
 */

#include <iostream>
#include <fstream>
#include "../../api/IConnection.hh"
#include "../../api/IModule.hh"
#include "../../api/IRunnable.hh"

/*!
 * \class Log
 * \brief Classe contenant la map des hooks où intervient Log, aindi que les IRunnable s associés à ces hooks, Herite de IModule
 */
class Log : public IModule {
private:
  std::map<eHook, IRunnable *>	hookinet;

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
  std::map<eHook, IRunnable *> 	&plug() const;
};

#endif /* !LOG_H_ */
