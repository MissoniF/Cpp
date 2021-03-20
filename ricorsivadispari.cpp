#include<iostream>
#include<vector>

int oddNumbers(std::vector<int>, int, int);

int main() {
	std::vector<int> v={31, 4, 6, 9, 11 , 7, 8};
	std::cout << oddNumbers(v, 0, v.size()-1) << std::endl;
}

int oddNumbers(std::vector<int> v, int counter, int size){
	if(size<0)
		return counter;
	if(v.at(size)%2!=0)
		counter++;
	return oddNumbers(v, counter, size-1);
}
