#ifndef LogPreSend_HPP
# define LogPreSend_HPP

#include "Log.hh"

/*
 * \file LogPreSend.hh
 * \author lemoig_v
 * \version 21
 */

/*!
 * \class LogPreSend
 * \brief Classe heritant de IRunnable
 */

class LogPreSend : public APITreeFriends::IRunnable {
private:
  int                           priority;
  std::ofstream                 _myfile;
  time_t                        _tm;
  struct tm                     *_curtime;

public:
  /*!
   * \brief Constructeur, initialise la gestion du temps, et ouvre le fichier de log
   */
  LogPreSend();
  /*!
   * \brief Destructeur, ferme le fichier de log
   */
  ~LogPreSend();
  /*!
   * \brief Getter de la priorité du module dans le hook POSTEND
   * \return int , 1000, pour passer en dernier (C'est des log ...)
   */
  int                           getPriority() const;
  /*!
   *\brief Methode a lancer dans le hook POSTEND
   */
  void                          run(APITreeFriends::IConnection &);
};

#endif /* !LogPreSend_HPP */
