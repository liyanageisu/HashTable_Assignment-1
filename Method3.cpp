#include<bits/stdc++.h>
using namespace std;

#define arraysizeA 5
#define arraysizeB 4

int setA[arraysizeA] = {12, 34, 11, 9, 3};
int setB[arraysizeB] = {2, 1, 3, 5};
 

int binarySearch (int x) 

{ 
 int l = 0;
 int r = arraysizeA-1;

    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
       
        if (setA[mid] == x) 
            return mid; 
  
       
        if (setA[mid] > x) 
            return binarySearch(x); 
  
       
        return binarySearch(x); 
    } 
  
   
    return -1; 
} 


int main(){
	int setA[5] = {12,34,11,9,3};
	int setB[4] = {2,1,3,5};
	int n = sizeof(setA) / sizeof(setA[0]);
    int l = setB[0];
    int r = setB[4];
	int x = 0;
	sort(setA,setA + n);
	
	cout <<"SET A : ";
	 for(int i=0; i<arraysizeA;i++)
	 	cout << setA[i] << " ";
	cout << endl;
	
	cout <<"SET B : ";
	 for(int j=0; j<arraysizeB;j++)
	 	cout << setB[j] << " ";
	cout << endl;
	
		int count = 0;
		for(x=0;x<arraysizeB;x++){
			int result = binarySearch(setB[x]);
			if(result == -1){
				cout << "The common elements are found";
				return -1;
				
			
		}else{
			count++;
			
			
		}
		
		}
		
			if(count!=0){
		printf("False");
	}else{
		printf("True");
	}
		
	
    return 0; 

} 
	

