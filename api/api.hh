#ifndef API_HH
#define API_HH

#include <map>
#include <string>
#include <iostream>

/*
IRequest
	-std::string 	ip
	-short				port
	-int					fd
	-boolean 			state
	-std::string 	requestBrut;
	-IhttpReq 		req;
	-IhttpMess 		resp;
	-boolean 			close;

IhttpReq
	-std::string												Method;
	-std::string												Ressource
	-std::string 												firstline
	-std::map<std::string, std::string> headerMap
	-std::string 												body
IhttpResp
	-int											 					statusCode;
	-std::string 												firstline;
	-std::map<std::string, std::string> headerMap
	-std::string 												body
*/

class Api
{
	Connection 					connecter; // ex :post mais je suis sur on peut faire d truck nul avan blacklist, SSL
	RequestParser 			parser; // Jahwar
	MethodAction 				method; // Get ressource, Post tout ça
	ResponseBuilder			response; // compression, Créer le header de réponse et le body
	Sender							send; // Aprés création de la réponse, encoding, close peut etre, tout ça,Log 

public:
	Api();
	~Api();

	void receiveRequest(Request *); // ou bien un objet request

};

#endif