#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool search(const char* fname)
{
	ifstream f(fname); 
	string s;
	while (getline(f, s)) {
		for (int j = 1; s[j] != '\0'; j++)
			if (s[j - 1] == 'n' && s[j + 1] == 'o')
				return true;
		return false;
	}
	
}
int main()
{

	char str[101]; 
	ifstream f("t.txt");
	f >> str;
	if (search(str))
	{
		cout << "Is there group of symbols where s i,j-1 = n and s i,j+1 = o " << endl;
		cout << "yes" << endl;
	}
	else
	{
		cout << "Is there group of symbols where s i,j-1 = n and s i,j+1 = o " << endl;
		cout << "no" << endl;
	}
	f.close();

	cin.get();
	return 0;
}

