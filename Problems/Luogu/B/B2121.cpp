#include <iostream>
#include <cctype>
using namespace std;



int main() {
	// Function cin don't read space
	string a,sub_s;
	string max_s,min_s;
	int cut_idx = 0;
	getline(cin,a);
	max_s = "";
	min_s = a;
	for(int i = 0; i < a.size(); i++) {
		if(!(a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)){
			sub_s = a.substr(cut_idx, i - cut_idx);
			cut_idx = i + 1;
		}
		if(sub_s.size() > max_s.size()){
			max_s = sub_s;
		} 
		if(sub_s.size()!=0 && sub_s.size() < min_s.size()) {
			min_s = sub_s;
		}
	}
	
	cout << max_s << "\n" << min_s;
	return 0;
}