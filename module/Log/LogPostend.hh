#ifndef LOGPOSTEND_HPP
# define LOGPOSTEND_HPP

#include "Log.hh"

/*
 * \file LogPostend.hh
 * \author lemoig_v
 * \version 21
 */

/*!
 * \class LogPostend
 * \brief Classe heritant de IRunable
 */
class LogPostend : public IRunable {
private:
  const int                     priority = 1000;
  std::ofstream                 _myfile;
  time_t                        _tm;
  struct tm                     *_curtime;

public:
  /*!
   * \brief Constructeur, initialise la gestion du temps, et ouvre le fichier de log
   */
  LogPostend();
  /*!
   * \brief Destructeur, ferme le fichier de log
   */
  ~LogPostend();
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

#endif /* !LOGPOSTEND_HPP */
