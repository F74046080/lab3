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
		if(j) v1.at(j)=k;
//		cout<<v1.at(j)<<" ";	//test
		j++;
		if(j==i) break;
	}
	sort(v1.begin(),v1.end());
	j=0;
/*	while(1){
		cout<<v1.at(j)<<" ";
		j++;
		if(j==i) break;
	}*/
	int total=0;
	for(j=(i-5);j<i;j++){
		total+=v1.at(j);
//		cout<<total<<endl; //test
	}
	
	ofstream out("stdout",ios::out);
	out<<total;
	out.close();

	return 0;

}
