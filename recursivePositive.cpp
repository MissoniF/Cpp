#include<iostream>
#include<vector>

bool AreTheyAllPositives(std::vector<int>, int, int);

int main(){
	std::vector<int> v={1, 3, 6, 9, 7, -2};
	std::cout << "I numeri inseriti sono tutti positivi?";
	std::cout << " " << std::boolalpha << AreTheyAllPositives(v, 0, v.size()-1) << "!" << std::endl;
}

bool AreTheyAllPositives(std::vector<int> v, int counter, int size){
	if(counter==v.size())
		return true;
	if(v.at(size)>0)
		counter++;
	else return false;
	return AreTheyAllPositives(v, counter, size-1);
}
