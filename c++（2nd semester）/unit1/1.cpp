#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	cout << "type in your file path:" <<endl;
	string filepath;
	cin >> filepath;
	ifstream infile(filepath.c_str(),ios::in);			/*input the file path*/
	if (infile.is_open() == false)
	{
		cout << "sorry,cannot open the file" <<endl;
		exit(0);
	}
	string keyword = "that";
	string tem_word;
	int count=0;
	while(infile >> tem_word)						/*using "==" to count occurrence of the word "that"*/ 
	{
		if (tem_word == keyword)
		{
			++count;
		}
	}
	cout << "that occurs " << count << " times."<<endl;
	return 0;
}