#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:

	Karen();
	~Karen();
	void complain(std::string level);

};

extern std::string levels[];

#endif