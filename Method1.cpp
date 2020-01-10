#include<bits/stdc++.h>
using namespace std;

int main(){
	int setA[5] = {12,34,11,9,3};
	int setB[4] = {2,1,3,5};
	
	cout <<"SET A : ";
	 for(int i=0; i<5;i++)
	 	cout << setA[i] << " ";
	cout << endl;
	
	cout <<"SET B : ";
	 for(int j=0; j<4;j++)
	 	cout << setB[j] << " ";
	cout << endl;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(setA[i] == setB[j]){
				cout << "The common elements:";
					cout << setA[i] << endl;
			
		}
		
		}
		
	}

}
