#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target){

	setName("Shruberry form");
	setGrades(145, 137);
	this->target = target + "_shruberry";
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=
(ShrubberyCreationForm const & src){

	this->target = src.target;
	return *this;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

	checkForm(executor);

	std::ofstream dest;
	dest.open(this->target);

	std::string buff = "\
            _____------___\n\
          _/...9..........\\_\n\
        _/...............0..\\_\n\
       /......................\\\n\
      |.....0..................\\\n\
       |_................8.... |\n\
         \\__..............____/\n\
            \\__.\\...../._-\n\
               \\ \\/ // /\n\
                |\\// \\ \\\n\
                / | \\\\ |\n\
                |\\//| /\\\n\
                / / \\ |\\\\\n\
               |/ \\//\\\\ |\n\
              // /\\| \\/ |\n\
             //_/\\__\\_/_\\\n";

	dest << buff.c_str();
	dest.close();
}
