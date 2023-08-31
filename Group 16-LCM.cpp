// LCM-practice.cpp : Defines the entry point for the console application.
//

//Group No 16    Aimen Raja ( 04162213021 ) & Khansa Ahmed ( 04162213015 )
//Finding LCM of two arrays.

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	const int MaxSize=50;
	int A[MaxSize];
	int csizeA;
	int i=0;
	cout<<"Enter size of A : ";
	cin>>csizeA;

	while(i< csizeA){
		cout<<"Enter "<<i+1<<" element of A "<<" : ";
		cin>>A[i];
		++i;
	}
	cout<<endl;

	int B[MaxSize];
	int csizeB;
	i=0;
	cout<<"Enter size of B : ";
	cin>>csizeB;

	while(i< csizeB){
		cout<<"Enter "<<i+1<<" element of B "<<" : ";
		cin>>B[i];
		++i;
	}

	cout<<endl;

	int C[MaxSize]={0};
	int csizeC=0;
	int D[MaxSize]={0};
	int csizeD=0;
	
	i=0;
	while(i<csizeA){
		int j=0;
		int k=-1;
		while(j<csizeB){
			if(A[i]==B[j]){
			k=1;
			break;
		}
		++j;
		}
		if(k==-1){
		D[csizeD]=A[i];
		++csizeD;
		}
		else{
		C[csizeC]=A[i];
		++csizeC;
		}
		++i;
	}


	i=0;
	while(i<csizeB){
		int j=0;
		int k=-1;
		while(j<csizeA){
			if(B[i]==A[j]){
			k=1;
			break;
		}
		++j;
		}
		if(k==-1){
		D[csizeD]=B[i];
		++csizeD;
		}
		
		++i;
	}

	int product=1;
	int productC=1;
	int productD=1;
	 i=0;

	while(i<csizeC){
	productC=productC*C[i];
	++i;
	}
	i=0;

	while(i<csizeD){
	productD=productD*D[i];
	++i;
	}

	int LCM=0;
	LCM=productD*productC;
	cout<<"LCM of A and B is : "<<LCM<<endl;

	system("pause");
	return 0;
}

