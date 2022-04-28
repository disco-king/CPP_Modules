#include "Replacer.hpp"

Replacer::Replacer(std::string const &s1, std::string const &s2){
	this->s1 = s1;
	this->s2 = s2;
	return;
}

bool Replacer::getFiles(std::string src){

	this->source.open(src.c_str());
	if(this->source.fail())
		return true;

	std::string dest = src + ".replace";

	this->destination.open(dest.c_str());
	if(this->destination.fail())
	{
		this->source.close();
		return true;
	}

	return false;
}

void Replacer::replaceThis(size_t pos, std::string &str){

	std::string buff = str;
	str = buff.substr(0, pos);
	str += this->s2;
	str += buff.substr(pos + this->s1.length(), buff.length());
}

std::string Replacer::getNewString
(size_t pos, std::string &buff){

	while(pos != std::string::npos)
	{
		replaceThis(pos, buff);
		pos = buff.find(s1, pos + this->s2.length());
	}
	return buff;
}

void Replacer::Replace(){

	std::string buff;
	size_t pos;

	while(std::getline(this->source, buff))
	{
		if((pos = buff.find(this->s1)) != std::string::npos)
			this->getNewString(pos, buff);
		destination << buff << std::endl;
	}
	this->source.close();
	this->destination.close();
}