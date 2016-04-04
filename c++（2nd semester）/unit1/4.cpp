#include <iostream>
#include <string>

using namespace std;

typedef struct M
{	
	string str1;
	string str2;
	int num;	
}MM;

int main()
{
	MM table;
	table.str1 = "hello";
	table.str2 = "world";
	table.num = 0;
	cout << table.str1 << " " << table.str2 <<endl;
	cout << table.num <<endl;
	
	MM *p1;

	p1 = &table;	/*using point to change value*/

	p1->str1 = "very";
	p1->str2 = "good";
	p1->num = 1;

	cout << p1->str1 << " " << p1->str2 <<endl;
	cout << p1->num <<endl;

}