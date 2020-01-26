#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int t1 = 32;
	float t2 = 1.3;
	float t3 = -0.4;
	signed long int t4 = 33;
	
	
	cout << t1 << " + " << t2 << " = " << t1 + t2;
	cout << endl;
	
	cout << t1 << " + " << t3 << " = " << t1 + t3;
	cout << endl;
	
	cout << t1 << " + " << t4 << " = " << t1 + t4;
	cout << endl;
	
	cout << t2 << " + " << t3 << " = " << t2 + t3;
	cout << endl;
	
	cout << t2 << " + " << t4 << " = " << t2 + t4;
	cout << endl;
	
	cout << t3 << " + " << t4 << " = " << t3 + t4;
	cout << endl;
}