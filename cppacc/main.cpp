// a small C++ program
#include <iostream>
#include <string>

void activateLessonOne();
void activateLessonStrings();

int main()
{
	//activateLessonOne();
	activateLessonStrings();
	
	return 0;
}

void activateLessonStrings()
{
	// ask for person's name
	std::cout << "Please enter your first name: ";

	// read the name
	std::string name;	// define name
	std::cin >> name;	// read into

	// write a greeting
	std::cout << "Hello, " << name << "!" << std::endl;
}

void activateLessonOne() 
{
	std::cout << "Hello, world!" << std::endl;
	3 + 4; // this compiles and discards (not yields the result for future chaining)
	std::cout << "This (\") is a quote, and this (\\) is a backslash." << std::endl;
	std::cout << "Name:\t\tBond\nSurname:\tJames\nCode:\t\t007\n" << std::endl;

	std::cout <<
		"// a small C++ program\n"
		"#include <iostream>\n"
		"\n"
		"int main()\n"
		"{\n"
		"\tstd::cout << \"Hello, world!\" << std::endl;\n"
		"\treturn 0;\n"
		"}\n"
		<< std::endl;
}