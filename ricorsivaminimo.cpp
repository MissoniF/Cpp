#include<iostream>
#include<vector>

int outMin(std::vector<int>, int, int);

int main(){
	std::vector<int> v={55, 3, 5, 2, 9, 6, 4};
	std::cout << outMin(v, v.at(0), v.size()-1);
	std::cout << std::endl;
}

int outMin(std::vector<int> v, int temp, int size){
	if(size<0)
		return temp;
	if(v.at(size)<temp)
		temp=v.at(size);
	return outMin(v, temp, size-1);
}
