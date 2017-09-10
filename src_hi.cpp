#include <iostream>
#include <math.h>

using namespace std;

void printTree();

int main(){
	printTree();
	return 0;
}

void printTree(){
	int index = 0; 

	for (int i = 1; i < 10; i++)
	{
		if (i > pow(2,index))
		{
			cout << endl ;
			index++;
		}

		cout << i ;
	}

	cout << "\n";
} 