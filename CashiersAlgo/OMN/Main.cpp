#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#define M 5

using namespace std;

int price[M] = {50, 20, 10, 4, 2};	// value from large to small

void cashier(int n){	// n is the total amount of money
	int c = 0;
	for(int i = 0; i < 5; ++i){
		while(n >= price[i]){
			n -= price[i];		// price[i] dollars is changed
			c++;
		}
	}

	if(n != 0){
		cout << "Cannot change\n";
	} else {
		cout << c << " notes/coins are changed\n";
	}

}

// http://www.cse.ntnu.edu.tw/~u91029/Greedy.html
int main(int argc, char *argv[]){
	char input[100];
	while(true){
		// get the input
		cout << "Please input amount to be changed:(input exit or quit to quit)";
		cin.getline(input, 100);

		// exit with specific input
		if(!strcmp(input, "exit") || !strcmp(input, "quit")){
			break;
		}
		
		// check the number format
		istringstream ss(input);
		int amount= 0;
		if(!(ss >> amount)){
			cerr << "Invalid number " << input << '\n';
		}

		// process cashier
		cashier(atoi(input));
	}
	return 0;
}
