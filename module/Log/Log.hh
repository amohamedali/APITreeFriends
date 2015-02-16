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
#include "../../api/IRunable.hh"

/*!
 * \class Log
 * \brief Classe contenant la map des hooks où intervient Log, aindi que les IRunable s associés à ces hooks, Herite de IModule
 */
class Log : public IModule {
private:
  IRunnable			*runpreco;
  IRunnable			*runpostend;
  std::map<eHOOK, IRunable *>	hookinet;

public:
  /*!
   * \brief Constructeur, initialise la map de hooks et les IRunable s correspondants
   */
				Log();
  /*!
   * \brief Destructeur, détruit les IRunable s
   */
				~Log ();
  /*
   * \briefb Getter de la map de Hook et d'IRunable
   * \return std::map<eHOOK, IRunable *> & , la map de Hook et d'IRunable
   */
  std::map<eHOOK, IRunable *> 	&plug() const;
};

#endif /* !LOG_H_ */
