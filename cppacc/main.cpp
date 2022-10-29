// a small C++ program
#include <iostream>

void activateLessonOne();

int main()
{
	activateLessonOne();
	
	return 0;
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