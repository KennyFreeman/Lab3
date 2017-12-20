#include <iostream>

using namespace std;
#include <vector>
#include <cstring>
#include <iostream>
#include <string>
#include <iomanip>
#include <locale.h>
#include <algorithm>

vector<string> new_users()
{
	vector<string> users;
	users.push_back("Denis");
	users.push_back("Vladimir");
 return users;
}

int main()
{
    setlocale(LC_ALL, "rus");
string name;

vector<string> users = new_users();
cout << "login: ";
	while(true)
	{
		getline(cin, name);

		if(!cin)
		{
			cout << "login incorrect" << endl;
			cin.clear();
			while (cin.get() != '\n');
		}
			else break;
	}
    	if (find(users.begin(), users.end(), name) != users.end()) {
		cout << "Hello, " << name << "!" << endl;
	} else {
		cout << "Hello, Guest!" << endl;
	}


    system("pause");
    return 0;
}
