#ifndef API_HH
#define API_HH

#include <map>
#include <string>
#include <iostream>

class Api
{
	Connection 					connecter; // Log, blacklist
	RequestParser 			parser; // Jahwar
	MethodAction 				method; // Get ressource, Post tout ça
	ResponseBuilder			response; // Créer le header de réponse et le body
	Sender							send; // Aprés création de la réponse, encoding, close peut etre, tout ça

public:
	Api();
	~Api();

	void receiveRequest(Request *); // ou bien un objet request

};

#endif