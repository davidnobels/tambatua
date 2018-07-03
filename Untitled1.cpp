#include <iostream>
#include <iterator>
#include <list>


int main(){
	std::list<int> mylist;
	for(int i=0;i<10;i++)mylist.push_back(i*10);
	std::list<int>::iterator it = mylist.begin();
	std::advance(it,5);
	std::cout<<"The sixth element in mylist is "<< *it<<"\n";
	
	return 0;
}
