//this code is just to prove that parameters in function are passed as values by default
//call by value
#include <cstdio>
using namespace std;

void func(int i)
{   //i redeclared in the local scope 
    i= -22; 
    printf("Value of i is %d\n", i);
}

int main()
{
    int i = 73;
    puts("this is main()");
    func(i);  //also as it able to modify i value in local and global scope irresepective of one another indicates 
              //values are passed in functions by default 
    // as i was only changed in local scope the global value of i is never modified 
    printf("the value of i after func() call is %d\n", i);
    return 0;
}

