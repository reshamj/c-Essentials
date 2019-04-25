#include <cstdio>
//Pointers and Referrence in c++
using namespace std;

int main()
{
	puts("Y is simply assigned the value x holds, thus y is a duplicate of x\n");    
	int x = 7; 
	int y = x; 
	printf("value of y =%d\n", y);
    
	puts("Pointers\n");
	int value = 12; 
	int *ip = &value;
	printf("value = %d\n",value); 
	printf("value pointer points to  = %d\n", *ip);
	printf("address that pointer holds = %p\n", ip);
	printf("address of the pointer  = %p\n", &ip);

	puts("References are exclusive to c++ and c does not have them");
	int z = 32;
	int *iz = &z;
	int &ref=z; 
	printf("value of z= %d",z); 
	printf("value pointed by pointer= %d\n", *iz);
	printf("value ref holds = %d\n", ref);
	
	puts("if value of ref is changed; it also changes value of z ");
	ref = 0; 
	printf("value of z= %d\n",z); 
	printf("value pointed by pointer= %d\n", *iz);
	printf("value ref holds = %d\n", ref);
	
	return 0;
}
