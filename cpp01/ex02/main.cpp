#include <iostream>
#include <string>

/* POINTER:
	a variable that stores a memory address.
	To get the value it points to we use the dereference operator (*stringPTR)
*/
/* REFERENCE:
	an alias or official nickname for an existing variable
	once it is tied to a variable, it acts directly as that variable.
	It cannot be NULL and cannot be changed to refer to a different variable later.
*/

int main(void)
{
	std::string text = "HI THIS IS BRAIN";
	std::string* stringPTR = &text;
	std::string& stringREF = text;

	std::cout << &text << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << text << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}