#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i;
	vector<float> vec(25);
	
	for(i = 0; i < 25; i++)			/*input the number and display the vector*/
	{
		float num;
		cin >> num;
		vec[i] = num ;
		cout << vec[i] << " ";
	}
	cout << endl;
	
	for(i = 0; i < 25; i++)			/*square the number and display the vector*/
	{
		vec[i] = vec[i] * vec[i] ;
		cout << vec[i] << " ";
	}
	cout << endl;

	return 0;
}


