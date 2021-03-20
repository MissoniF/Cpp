#include<iostream>

void printInvers(char arr[], int pos);

int main(){
	char arr[]={'f','a','b','r','i','z','i','o'};
	printInvers(arr, 7);
}

void printInvers(char arr[], int pos){
	if(arr[pos]>=0)
		std::cout << arr[pos] << " - ";
	return printInvers(arr, pos-1);
}
