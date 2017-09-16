#include <iostream>
#include <math.h>
using namespace std;

#define MAXSIZE 20
typedef int ElemType;

typedef struct 
{
	ElemType data[MAXSIZE];
	int length;
}SqList;

void InitSqList(SqList &L){
	L.length=0;
}

bool InsertList(SqList &L,int i,ElemType x){
	int j;

	if (L.length == MAXSIZE || i<1 || i>L.length+1){
		return false;
	}

	if (i<= L.length){
		for (j = L.length; j >= i  ; j--)
		{
			L.data[j] = L.data[j-1];
		}
	}

	L.data[i-1]=x;
	L.length++;

	return true;
}

void CreateList(){
	
}

void PrintListInfo(SqList &L){
	cout << "List Length:" << L.length << endl;
	cout << "List elements:" << endl ;
	for (int i = 0; i < L.length; i++)
	{
		cout << "["<<i<<","<<i+1<<"]:" <<L.data[i] << endl ;
	}

	cout << endl;
}



