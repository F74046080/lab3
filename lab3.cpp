#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>

using namespace std;

int main(){

	int i=0,j=0,k=0;
	ifstream in("file.in",ios::in);
	while(in>>k){
		i++;
	}
	vector<int> v1(i);
	in.close();
	ifstream in2("file.in",ios::in);
	while(in2>>k){
		v1.at(j)=k;
		cout<<v1.at(j)<<" ";	//test
		j++;
		if(j==i) break;
	}
	return 0;

}
