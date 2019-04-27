#include <iostream>
#include <vector>
#include <string>
using namespace std; 
/*fix this function
void LoopVector(auto &vector)
{
	for (auto &v : vector)
		cout<< v <<" ";
}*/

int main()
{
//Declare a vector of int type 
	vector<int> vec; 
	vec= {12, 13, 14, 15, 16,17,18,19,20};
	
	cout<<"Size of vector\t"<<vec.size()<<endl; 
	cout<<"First element of vector\t"<< vec.front()<<endl; 
	cout<<"Last element of vector\t"<< vec.back()<<endl;

	//Access element at a particular location 
	cout<<vec[5]<<"\t"<<vec.at(5)<<endl; 
	
	//Insert at the begining 
	vec.insert(vec.begin(), -22); 
	//Insert at the end
	vec.insert(vec.end(), 222); 

	//Insert at the specific location + for begin iterator - for end iterator
 	vec.insert(vec.begin() + 3, 0); 
 	vec.insert(vec.end() - 1, 99);
 
	//For loop through the vector
	for (auto i=vec.begin(); i< vec.end(); ++i)
			cout<<*i<< " "; 
	//as the data type of i / iterator in this case is complex = vector<int> :: iterator ; To avoid this complexity we use auto
	cout<<endl;	


	//Erase/ Delete a particular element
	vec.erase(vec.begin()); //deletes the first element

	//Erase/ Delete a particular element
	vec.erase(vec.end()-1); //deletes the last element dont forget -1 as the count begins from 1 but index from 0 
				//possible error in this case is segmentation fault : core dump

	vec.erase(vec.begin()+6); //deletes the first element
	
	//Range loop 
	for (int & v: vec)
		cout<< v<<" ";
	cout<<endl;
	//C array to vector 
	const static int size=10;  //want to keep const so that no unwanted code can modify the vector
	int array[size]= {0,1,2,3,4,5,6,7,8,9};
	vector <int> VecNum (array, array+size);
	for (int &v : VecNum)
		cout<< v <<" ";
	cout<<endl;
	
	//String of vectors 
	vector<string> vs = {"hello", "dumdums", "wassup"};
	cout<<endl;
	for (auto &v : vs)
		cout<< v <<" ";	
	//LoopVector(&vs); Try to fix this function signature
	
	
return 0; 
}
