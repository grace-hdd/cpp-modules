#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

/* randomChump() creates a zombie, makes it announce itself right awaay, and doesn't
	need to return anything. so creating it on the stack as a local variable is ideal C++ 
	automatically destroys it as soon as raandomChump() finishes executing
*/
/* Stack Memory Allocation = store local variables and objects created inside a function
	- LIFO
	- Automantic management: when a function is called, a memory frame is pushed onto the 
							stack of its local variables. When the function ends, that frame
							is popped off instantly freeing the memory
	
	How stack allocation works: 
		1. when uou declare a variable direclty, space is allocated for it on the active stack frame
		2. The object exists only withing its current scope
		3. As soon as execution reaches the closing brace }:
			- C++ automatically calls the object's destructor
			- the memory is reclaimed without needing any manual cleanup
*/