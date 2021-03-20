#include<iostream>

bool isPalindrome(char arr[], int, int);

int main(){
	char arr[]={'f','a','b','b','a','f'};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	if(isPalindrome(arr, 0, n-1) == 1)
		std::cout << "E' PALINDROMA!\n";
	else
		std::cout << "NON E' PALINDROMA!\n";
}

bool isPalindrome(char arr[], int begin, int end){
	if(begin >= end)
		return 1;
	if(arr[begin] == arr[end])
		return isPalindrome(arr, begin+1, end-1);
	else
		return 0;
}
