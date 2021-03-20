#include<iostream>

char majorChar(char arr[], char, int, int);

int main(){
	char arr[]={'a','v','g','z','s','r','b'};
	std::cout << " - " << majorChar(arr, 0, 0, 0) << std::endl;
}

char majorChar(char arr[], char major, int pos, int counter){
	if(counter==6)
		return major;
	if((arr[pos]>arr[pos+1]) && (arr[pos]>major))
		major=arr[pos];
	
	counter++;
	
	return majorChar(arr, major, pos+1, counter);
}
