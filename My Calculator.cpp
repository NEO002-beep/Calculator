#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){

	double numb1, numb2 = 0;
	char symbol;
	string inputWord;
	int i = 1;

	while (true){
			cout << "Welcome to my calculator" << i++ << endl;
			cout << "Only write the sum eg.(2+2). Then press ENTER!"<< endl;
			cin >> numb1 >> symbol >> numb2;

			switch (symbol){
				case '+':
				 cout << "=" << numb1 + numb2 << endl;
				 break;
				 case '-': 
				 cout << "=" << numb1 - numb2 << endl;
				 break;
				 case '*':
				  cout << "=" << numb1 * numb2 << endl;
					break;
					case '/':
					if (numb2 == 0){
						cout << "Enter a value greater than zero!"<< endl;
					}
					else {
						cout << "=" << numb1 / numb2 << endl;
					}
					break;
					case '%':
					if (static_cast<int>(numb2) == 0){
						cout << "Enter number greater than 0" << endl;
					}
					else {
						cout << "=" << static_cast<int>(numb1) % static_cast<int>(numb2) << endl;
					}
					break;
					default: {
						cout << "Invalid inputs!"<<endl;
					}	
			}	
			cout << "To exit calculator type in (exit). To continue type anything "<< endl;
			cin >> inputWord;

						if(inputWord == "EXIT" || inputWord == "exit"){
							cout << "Goodbye" << endl;
						break;}
	}

	return 0;
}