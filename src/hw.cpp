#include <iostream>
#include <cstdlib>
#include "hw/getname.h"

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		
		std::cerr << "Нужно указать индекс имени " <<std::endl;
		return 1;
	}

	int i = std::atoi(argv[1]);

    std::cout << "Hello, " << GetName(i) << "!" << std::endl;

    return 0;
}
