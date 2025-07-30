//PASSING ARRAY TO FUNCTIONS 

#include<iostream>
using namespace std;

void printArray(int * arr,int n){


	cout <<"In Function "<<sizeof(arr) <<endl;
	arr[0] = 100;
	for(int i=0;i<n;i++){
		cout << arr[i] <<endl; 
	}

}


int main(){

	int arr[] = {1,2,3,4,5,6};

	int n = sizeof(arr)/sizeof(int);


	
	printArray(arr,n);

	
	cout <<"In Main "<<sizeof(arr) <<endl;
	for(int i=0;i<n;i++){
		cout << arr[i] <<endl; 
	}

	


	return 0;
}
/*-------------------------------------------*/
//LINEAR SEARCH IN AN ARRAY

#include<iostream>
using namespace std;
	

int linear_search(int arr[],int n,int key){

	for(int i=0; i<n; i++){
		//Check if current element matches with the key
		if(arr[i] == key){
			return i;
		}
	}
	//out of the loop 
	return -1;
}


int main(){

	int arr[] = {10,15,12,9,6,4,3,10,8};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	int index = linear_search(arr,n,key);
	if(index!=-1){
		cout<<key <<" is present at index "<< index <<endl;
	}
	else{
		cout<<key <<" is NOT Found!" <<endl;
	}


	return 0;
}
/*--------------------------*/

//
