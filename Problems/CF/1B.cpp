#include<iostream>
using namespace std;

int pow_i(int a, int b){
    int s = 1;
    for(int i = 1; i <= b; i++) {
        s*=a;
    }
    return s;
}
string toxy(string s1,string s2){
    string s = "";
    int a = stoi(s2);
    int n,r,m;
    r = a;
    while(1){
        n = r;
        m = n%26;
        r = n/26;
        if(!m) {
            m = 26;
            r -= 1;
        }
        s = (char)(m+64)+ s;
        if(r==0)
            break;
    }
    s += s1;
    return s;
}
string torc(string s1,string s2){
    string s = "R";
    int sum = 0;
    int len = s1.length();
    for(int i = len - 1; i >= 0; i--){
        sum += (int(s1[i])-64)*pow_i(26,len - 1 - i);
    }
    s += s2;
    s += 'C';
    s += to_string(sum);
    return s;
}
int main() {
	int a;
    cin >> a;
    string s,r,c,ans,x,y;
	for(int i = 0; i < a; i++){
        cin >> s;
        x = "";
        r = "";
        if(s.find("R")==0&&s.find("C")!=string::npos&&(int)s[s.find("C")-1]<65){
            for(int i = 1; i < s.length(); i++){
                if(isdigit(s[i]))
                    r += s[i];
                else {
                    c = s.substr(i+1);
                    break;
                }
            }
            ans = toxy(r,c);
            cout << ans << endl;
        } else {
            for(int i = 0; i < s.length(); i++){
                if(!isdigit(s[i]))
                    x += s[i];
                else {
                    y = s.substr(i);
                    break;
                }
            }
            ans = torc(x,y);
            cout << ans << endl;
        }
    }
    
	return 0;
}