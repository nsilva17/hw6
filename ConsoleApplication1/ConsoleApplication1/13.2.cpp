#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ifstream fin;
	string filename;
	cout << "enter filename" << endl;
	cin >> filename;
	fin.open("filename");
	if (!fin){
		cout << "file unavailable to open" << endl;
		return 0;
	}
	string line;
	while (getline(fin, line)){
		cout << line << endl;
	}
	fin.close()
}