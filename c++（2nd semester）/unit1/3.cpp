#include<iostream>
#include<string>

using namespace std;
 
void modifyString(string *str)
{
    *str = "modify *";
}
 
void modifyString(string &str)
{
    str = "modify &";
}
 
int main()
{
    string String = "Hello World";
    cout << "String = " << String <<endl;
   
	modifyString(&String);
    cout << "String = " << String <<endl;
   
	modifyString(String);
    cout << "String = " << String <<endl; 
    return 0;
}