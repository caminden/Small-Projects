//Magic 8 ball

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//work in progress
int main() {

	string val = "start";
	int n;
	srand(time(NULL));

	while (val != "quit") {
		n = rand() % 10;
		cout << "Enter question or quit to quit" << endl;
		getline(cin, val);

		if (val == "quit") {
			cout << "quitting..." << endl;
		}
		else {
			if(n == 1){
				cout << "Yes" << endl;
			}
			if(n == 2){
				cout << "No" << endl;
			}
			if(n == 3){
				cout << "Maybe" << endl;
			}
			if(n == 4){
				cout << "Maybe not" << endl;
			}
			if(n == 5){
				cout << "Quite possibly" << endl;
			}
			if(n == 6){
				cout << "Not possible" << endl;
			}
			if(n == 7){
				cout << "Ask another program" << endl;
			}
			if(n == 8){
				cout << "Try again" << endl;
			}
			if(n == 9){
				cout << "IDK Im no expert" << endl;
			}
			if(n == 0){
				cout << "%$ERROR$%" << endl;
			}
		}
		
	}
	cin.get();
return 0;
}
