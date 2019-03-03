#include <iostream>
#include <cstdlib>
#include "hw/getname.h"

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		
		std::cerr << "Нужно указать индекс числа" <<std::endl;
		return 1;
	}

	int i =atoi(argv[1]);
	int j =GetName(i);

    std::cout << "Целая часть от деления 10 / " << j << " = " << 10/j <<std::endl;

    return 0;
}
