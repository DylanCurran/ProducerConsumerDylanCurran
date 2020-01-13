#include "Consumer.h"

void Consumer::run()
{
	std::cout << "Consumer Starting" << std::endl;
	while (c < n) {
		while (p <= c) {
			//System.out.println("Starving waiting on a burger!");
		}
		std::cout << "Eating Burger: " << c << std::endl;
		b = buf;
		c = c + 1;

	}
	std::cout << "Finished Making Burgers" << std::endl;
}
