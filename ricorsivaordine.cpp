#include<iostream>
#include<vector>

void inOrder(std::vector<int>&, int, int);

int main(){
	std::vector<int> v={1,2,3,4,5};
	inOrder(v, 0, 0);
}

void inOrder(std::vector<int>& v, int i, int stop){
	if(stop==v.size())
		return;
	
	std::cout << v.at(i) << std::endl;
	stop++;
	return inOrder(v, i+1, stop);
}
