#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	ifstream fin;
	fin.open("Exercise13_1.txt");
	if (fin.fail()){
		cout << "file unavailable to open" << endl;
		return 0;
	}
	int num;
	while (fin.open == true){
		for (int i = 0; i < 1001; i++){
			srand(time(NULL));
			num = rand();
			cout << num << endl;
		}

	}
	string line;
	while (getline(fin, line)){
		cout << line << endl;
	}

}