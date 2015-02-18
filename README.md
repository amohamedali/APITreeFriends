#APITreeFriends

## Documentation API
--------------------

* Introduction
* Fonctionnement

### Introduction
----------------

La team K-PUSH propose aux élèves d'epitech sa solution d'api dans le cadre du projet Zia,
APITreeFriends !!!

Utiliser APITreeFriends vous permettra d'implémenter tous vos modules, les faire fonctionner ensemble et sans conflits.

La team K-PUSH s'engage à répondre au moindre de vos soucis.
La team K-PUSH représente.

### Fonctionnement
------------------

Pour que votre module puisse fonctionner avec APITreeFriends il devra respecter une architecture précise.

Votre module devra hériter de IModule. Nous verrons ce que cela implique aprés avoir détailé la structure attendu du Module.

Le code de traitement de votre module, devra être situé dans une classe héritant de IRunable et être instancié dans votre module.

##### Pourquoi ?

APITreeFriends permet à un module de se plugger à différente étape du traitement (hook) et de proposer un fonctionnement différent en fonction de son placement.

Par exemple, un module logger qui souhaiterais afficher des informations en rouge avant l'encoding du content et en bleu aprés l'encoding devra avoir deux instance de classe héritant de IRunable dans son module.

Le module peut ainsi être vu comme un container de IRunable.

L'interface IModule impose aux différents modules de renvoyer une std::map<eConnectionState, IRunable *> lors de l'appel de fonction plug().

Concernant la gestion de la priorité sur un hook, ce ne sont pas les modules qui définissent individuellement leur priorité. Le fichier de conf module.config devra être correctement configuré pour que les modules soient bien load et appellé dans un ordre spécifié.

Ce fichier doit respecter un format précis. A savoir :
Une premiere ligne qui va référencer tous les modules
'{MODULES=' + [ '[' + ModuleName + '],']* + '},'
Une ligne par hook en sachant que l'ordre des modules sera l'ordre d'appel.
'{' + HooKName + '=' + [ '[' + ModuleName + '],']* + '},'

La fonction run des IRunable sera appelé avec en paramètre une référence sur un IConnection contenant la totalité des données nécessaire.

Le IConnection contient les informations relatives à la connection avec le client, ainsi que sur la requète et la réponse via un IHTTPReq et un IHTTPRes, qui héritent tout deux de IHTTPMes.

IHTTPReq et IHTTPRes correspondent respectivement à la requète en cours de traitement et à la réponse en cours de création.
