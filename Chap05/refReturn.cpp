//Return ref in function example. 
#include <cstdio>
#include<string>
using namespace std; 

const string & func(); 
//function signature declares return of a ref of a string as a const; so the value can not be modified
const string & func()
{
	const static string s = "this string is in created in func; and passed as a ref";
	return s; //static to allow no modifications and have a global scope rahter than a local scope
} 

int main()
{
	const string s=func(); //returns a ref of s which is now stored in a new const string s 
	printf("%s\n",s.c_str());
	return 0; 
}

