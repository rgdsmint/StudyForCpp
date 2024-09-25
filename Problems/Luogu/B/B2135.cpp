#include <iostream>
#include <vector>
using namespace std;


int main() {
	vector<string> s;
	string tmp;
	while(cin >> tmp) {
		s.push_back(tmp);
	}
	for(int idx = 0; idx <= s.size() - 3; idx++){
		if(s[idx] == s[s.size()-2])
			s[idx] = s[s.size()-1];
	}
	for(int idx = 0; idx <= s.size()-3; idx++){
		cout << s[idx] << " ";
	}
	return 0;
}