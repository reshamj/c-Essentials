#include <cstdio>
//Pointers and Referrence in c++
using namespace std;

int main()
{
	char s[] = "String"; 
	puts("The base address of an array can be accessed woith pointers");
	for (char *pointer = s; *pointer; ++pointer)
	{
		printf("char is=%c\n", *pointer);	
	}

	//C++ 11 feature range function 
	for (char c :s)
	{
		if (c == 0) break; 
		printf("char is %c\n", c);	
	}
	return 0;
}
