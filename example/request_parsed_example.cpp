#include <map>
#include <string>
#include <iostream>

typedef std::map<std::string, std::string> header_format;

class request_parsed_example
{
	std::string 	_firstline;
	header_format	_header;
	std::string 	_content;
public:
	request_parsed_example();
	~request_parsed_example();
	const std::string firstline() { return _firstline;}
	const header_format header() { return _header; }
};

request_parsed_example::request_parsed_example(){
	_firstline = "GET /wiki/Hypertext_Transfer_Protocol HTTP/1.1";
	_header["Host"] = "fr.wikipedia.org";
	_header["Connection"] = "keep-alive";
	_header["Pragma"] = "no-cache";
	_header["Cache-Control"] = "no-cache";
	_header["Accept"] = "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8";
	_header["X-FirePHP-Version"] = "0.0.6";
	_header["User-Agent"] = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_9_5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/40.0.2214.111 Safari/537.36";
	_header["Accept-Encoding"] = "gzip, deflate, sdch";
	_header["Accept-Language"] = "fr-FR,fr;q=0.8,en;q=0.6";
}

request_parsed_example::~request_parsed_example(){

}

int main()
{
	request_parsed_example 	request;
	header_format						header;

	header = request.header();
	for (header_format::iterator it = header.begin(); it != header.end(); ++it)
	{
		std::cout << it->first << " : " << it->second << "\n";
	}
}