#include "header.hpp"


// #include <iostream>
// using namespace std;
// C.Max-Min Swap
// Consider an array a of length n .
//  The maximal element in that array is equal to M ,
//  the minimal is equal to m .
// The array b of the same length is obtained from the array a
// in the following way: if a [ i ] = M ,
// then b [ i ] = m , if a [ i ] = m ,
// then b [ i ] = M , if m < a [ i ] < M ,
// then b [ i ] = a [ i ] . You are given the array b .
// Your task is to reconstruct array a .

int main(){

	short int n;
	cin>>n;
	int a[n],b[n];

	for(int i=0;i < n;i++)
		cin>>a[i];

	int M = a[0];
	int m = a[0];
	for(int i=0;i < n;i++){
		if(a[i] > M){
			M = a[i];
		}
		else if(a[i] <m){
			m = a[i];
		}
	}


	for(int i=0; i < n; i++){
			if(a[i] ==M){
				b[i] = m;
			}

			else if(a[i]==m){
				b[i] = M;
			}
			else{
				b[i] = a[i];
			}
	}

		for(int i=0;i < n;i++)
			cout << b[i] << " ";
	return 0;

}
