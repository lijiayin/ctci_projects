#include <iostream>
#include <cstring>
using namespace std;

bool if_unique(string s){
	//Assuming input string has only ASCII coded charcter (8-bit)
	int found_map = 0;
	for(int i=0; i< s.length(); i++){
		int index = int(s[i]);
		int mask = 1 << index;
		if (found_map & mask)
			return false;
		else{
			found_map = found_map | mask;
		}
	}
	return true;

}

int main(){
	string s1 = "This will failed";
	string s2 = "asdfghjkl";
	cout<<if_unique(s1)<<endl;
	cout<<if_unique(s2)<<endl;
	return 0;
}
