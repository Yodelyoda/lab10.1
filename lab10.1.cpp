#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool search(const char* s)
{
	for (int j = 0; s[j] != '\0'; j++)
		for (int i = 0; s[i] != '\0'; i++)
			if (s[i,j - 1] == 'n' && s[i,j + 1] == 'o')
				return true;
	return false;
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

