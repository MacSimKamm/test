#include "hw/getname.h"

static std::string	names[] = {"Mila", "Kika", "Petrucho"};

const std::string GetName(int index)
{
	return names[index];
}
