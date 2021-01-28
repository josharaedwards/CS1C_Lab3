#include <iostream>
#include <string>
using namespace std;

int hello1Funtion(string name1);
int hello2Function(string name2);

int main()
{
	string name1 = "Joshara Edwards";
	hello1Funtion(name1);

	string name2 = "name2";
	hello2Function(name2);

	cout << endl << endl;
	cout << "Press ENTER to exit program..." << endl;
	cin.get();
	return 0;
}