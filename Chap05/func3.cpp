//call by reference using pointer 
#include <cstdio>
using namespace std;

void func(int *i)
{   //i modified in the local scope however as the reference is used to modify; the value appends in the main block too
	printf("Incoming value of i is %d\n", *i);    
	*i= -22; 
    	printf("After modification value of i is %d\n", *i);
}

int main()
{
    int i = 73;
    puts("this is main()");
    func(&i);  
    // as ref i via a pointer was used to func pass the value of i gets modified despite func has a local block
    printf("the value of i after func() call is %d\n", i);
    return 0;
}
// there is a side effect to call by ref; if unsure of the implementation; the modification of value by ref without confirming if authentic can be dangerous; thus make the func calls as void func(const int *	i)
