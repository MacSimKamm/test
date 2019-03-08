#include <iostream>
#include <cstdlib>
#include "hw/getname.h"

/*Исчерпание области памяти стека

Program received signal SIGSEGV, Segmentation fault.
0x00005555555549a3 in GetName (arr=0x7fffff806840, n=15000) at src/getname.cpp:12
12			mas[i] = i;

(gdb) bt full
#0  0x00005555555549a3 in GetName (arr=0x7fffff806840, n=15000) at src/getname.cpp:12
        i = 0
        k = 15000
        mas = <error reading variable mas (Cannot access memory at address 0x7fffff7f7d80)>

#1...
*/

int main()
{
	int n = 15000;

	int arr[n];

	for (int i=0; i<n; i++) 
		arr[i] = i;

	GetName(arr, n);


    return 0;
}
