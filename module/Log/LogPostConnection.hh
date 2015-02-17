#ifndef LOGPOSTCONNECTION_HPP
# define LOGPOSTCONNECTION_HPP

#include "Log.hh"

/*
 * \file LogPostConnection.hh
 * \author lemoig_v
 * \version 21
 */

/*!
 * \class LogPostConnection
 * \brief Classe heritant de IRunnable
 */

class LogPostConnection : public APITreeFriends::IRunnable {
private:
  int                           priority;
  std::ofstream                 _myfile;
  time_t                        _tm;
  struct tm                     *_curtime;
public:
  /*!
   * \brief Constructeur, initialise la gestion du temps, et ouvre le fichier de log
   */
  LogPostConnection();
   /*!
    * \brief Destructeur, ferme le fichier de log
    */
  ~LogPostConnection();
  /*!
   * \brief Getter de la priorité du module dans le hook PRECONNEXION
   * \return int , 1000, pour passer en dernier (C'est des log ...)
   */
  int                           getPriority() const;
  /*!
   *\brief Methode a lancer dans le hook PRECONNEXION
   */
  void                          run(APITreeFriends::IConnection &);
};

#endif /* !LOGPOSTCONNEXION_HPP */
