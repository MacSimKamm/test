#include "hw/getname.h"

static int	names[] = {3, 0, 4};

const int GetName(int index)
{
	return names[index];
}
