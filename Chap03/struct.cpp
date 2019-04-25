// struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main() {
	//new way to declare struct c++ 11 and up the old way was struct Employee.id = 1; Employee.name = 'resh' etc
    Employee joe = { 42, "Joe", "Boss" };
    Employee * e = &joe; 
    
    printf("%s is the %s and has id %d\n",
           joe.name, joe.role, joe.id);
	//. is called the member ref operator 

    printf("%s is the %s and has id %d\n",
           e->name, e->role, e->id);
    //-> is called the pointer member operator 
    return 0;
}
