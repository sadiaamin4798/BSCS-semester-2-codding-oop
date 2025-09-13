#include<iostream>
#include<fstream> 
#include<string> 
using namespace std;
int main(){
ofstream file("2nd.txt");
if(file.is_open()){
file<<"Welcom to pakistan \n";
file<<"It is a beautiful country";
file.close();	
}
else{
	cout<<"unable to open file"<<endl;
}
string readfile;
ifstream file2("2nd.txt");
if(file2.is_open()){
while(getline(file2,readfile)){
	cout<<readfile<<endl;
}
file2.close() ;	
	
}
else{
	cout<<"file does not exist"<<endl;
}
	return 0;
}