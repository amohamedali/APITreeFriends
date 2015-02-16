#ifndef LOGPOSTSEND_HPP
# define LOGPOSTSEND_HPP

#include "Log.hh"

/*
 * \file LogPostSend.hh
 * \author lemoig_v
 * \version 21
 */

/*!
 * \class LogPostSend
 * \brief Classe heritant de IRunable
 */
class LogPostSend : public IRunable {
private:
  const int                     priority = 1000;
  std::ofstream                 _myfile;
  time_t                        _tm;
  struct tm                     *_curtime;

public:
  /*!
   * \brief Constructeur, initialise la gestion du temps, et ouvre le fichier de log
   */
  LogPostSend();
  /*!
   * \brief Destructeur, ferme le fichier de log
   */
  ~LogPostSend();
  /*!
   * \brief Getter de la priorité du module dans le hook POSTEND
   * \return int , 1000, pour passer en dernier (C'est des log ...)
   */
  int                           getPriority() const;
  /*!
   *\brief Methode a lancer dans le hook POSTEND
   */
  void                          run(IConnection &);
};

#endif /* !LOGPOSTSEND_HPP */
