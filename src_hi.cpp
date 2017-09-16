#include <iostream>
#include <math.h>

using namespace std;

void printTree();
void test();

int main(){
	//printTree();
	test();
	return 0;
}

void printTree(){
	int index = 0; 
 
	for (int i = 1; i < 20; i++)
	{
		if (i > pow(2,index))
		{
			cout << endl ;
			index++;
		}

		cout << i << " ";
	}

	cout << "\n";
} 

void test(){
	int p;
	p= 10;

	cout << "p is " << p << endl;
	//cout << "*p is " << *p;
	cout << "&p is " << &p << endl;
}