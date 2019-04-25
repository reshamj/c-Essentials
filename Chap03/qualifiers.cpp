// const keyword will make the datatype constant and hence value can be only declared once 
//and makes the datatype mutable
#include <cstdio>
using namespace std;

class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    int x = 7;
    return ++x;
}

int main() {
    int i = 42;
    printf("The integer is %d\n", i);
    i = 23; 
    printf("i is not constant hence the new value of i is %d\n", i);
	
    const int r = 2; 
    //r = 12; //this will throw error as r is not mutable anymore

    //as x in func() has local scope calling the 'func' will always return value 8 
    //had there been a key word static then following printf would print 9 and 10 
    i = func(); 
    printf("value of i as recieved from func %d\n", i);
 
    i = func(); 
    printf("value of i as recieved from func %d\n", i);

    //look at the following magic 
    S a;
    S b;
    S c;
    printf("a.static_value() =%d\n", a.static_value());
    printf("b.static_value() =%d\n", b.static_value());
    printf("c.static_value() =%d\n", c.static_value());
    // class objects a, b and c are sharing the same static variable x and hence rather than each value being 8,8 and 8 it is 8, 9, 10
    return 0;
}
