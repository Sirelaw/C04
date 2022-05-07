#include "inc/AAnimal.hpp"
#include "inc/Cat.hpp"
#include "inc/Dog.hpp"

int main() {
	Cat	lucky;
	Dog	simba;
	// Animal cant_be_initialized;

	lucky.insert_idea("I want to eat that shoe.");
	lucky.insert_idea("What is the essence of life.");
	lucky.insert_idea("How about some milk ehn.");
	simba.insert_idea("I just wanna run...");
	std::cerr << "<<<<<<<<------------------------------------->>>>>>>>" << std::endl;
	Cat		captain(lucky);
	std::cout << captain.retrieve_idea(1) << std::endl;
	return EXIT_SUCCESS;
}