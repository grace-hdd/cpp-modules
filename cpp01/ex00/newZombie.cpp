#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}

// new = operator used for dynamic allocation on the heap, and constructs the object
// 1. allocate memory: request more space on the heap for a Zombie object
// 2. initializes object: calls the Zombie constructor passing  ex."Foo" to set the name
// 3. returns a pointer: give back a pointer (Zombie*) pointing to that new object's memory location
/* Because newZombie() returns a pointer so the zombie can be used outside the function scope,
	allocating on the heap with new is necessary, it will stay alive until we manually call
	delete on it*/
/*  because heap memory does not clean itself when a function ends, any
 	object created with new will stay in memory forever unless you destroy
	it using the delete operaator. Forgetting to delete it leads to a memory leak.
*/
