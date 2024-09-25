#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	string str1,str2;
	while(a--){
		cin >> str1 >> str2;
		if(str1 == str2)
			cout << "Tie" << endl;
		else if((str1 == "Rock" && str2 == "Scissors")||(str1 == "Scissors" && str2 == "Paper")||(str1 == "Paper" && str2 == "Rock"))
			cout << "Player1" << endl;
		else 
			cout << "Player2" << endl;
	}
	return 0;
}
