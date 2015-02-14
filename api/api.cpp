#include "api.hh"

APITreeFriends::Api::Api()
{

};

APITreeFriends::Api::~Api() {

};

void APITreeFriends::Api::receiveRequest(Request *req) {
	connecter(req); // blacklist
	parser(req); // Jahwar
	method(req); // Get ressource, Post tout ça
	response(req); // Créer le header de réponse et le body
	send(req); // Log 
};