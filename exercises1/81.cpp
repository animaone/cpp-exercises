#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	/*
	81. Write a C++ program to which replace all the words "dog" with "cat".
	*/
	
	string phrase = "the dog jumps over the dog and becomes a cat";
	
	for (int j = 0; j + 3 < (int) phrase.size(); j++ )
	{
		string word = phrase.substr(j, 3);
		if (word == "dog")
		{ 
			phrase.replace(j, 3, "cat");
		}
	}
	
	cout << phrase;
	cout << endl;
	
}