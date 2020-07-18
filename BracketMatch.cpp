using namespace std;
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string.h>

int main(int argc, char* argv[]){

	if(argc < 2){
		cout << "Usage: comment (insert filename example.txt)" << endl;
		exit(1);
	}

	int count = 0;
	ifstream in;
	char c;
	int state = 0;
	string file = string(argv[1]);

	in.open(file);
	while(in){
        switch(state){
                case 0: in.get(c);
                        if(c == '/') state = 1;
                        else state = 0;
                        break;
                case 1: in.get(c);
                        if(c == '*') {cout << "Start of a comment" << endl; state = 2; }
                        else if(c == '/') state = 1;
                        else state = 0;
                        break;
                case 2: in.get(c);
                        if(c == '*') state = 3;
                        else state = 2;
                        break;
                case 3: in.get(c);
                        if(c == '*') state = 3;
                        else if(c == '/') state = 4;
                        else state = 2;
                        break;
                case 4: cout <<"end of comment" << endl;
                        count++;
                        cout << "Comment count is " << count << endl << endl;
                        state = 0;
                        break;
        }

	}
in.close();
return 0;
}
