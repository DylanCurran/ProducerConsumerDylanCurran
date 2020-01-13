#include "Producer.h"


void Producer::run()
{
	std::cout << "Producer Starting" << std::endl;
	while (p < n) {
		while (p != c) {
			//System.out.println("Short order cook spinning");
		}
		a = (int)rand() * 100;
		std::cout << "Making a Burger: " << p << std::endl;
		buf = a;
		p = p + 1;
	}
	std::cout << "Finished Making Burgers" << std::endl;
}
