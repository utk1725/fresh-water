//https://www.hackerrank.com/challenges/reduced-string/problem
#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    int found=0;
    string::iterator it;
    do{
        found=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                found=1;
                it= s.begin()+i; s.erase(it);
                //cout << s.length()<<endl;
				it= s.begin()+i; s.erase(it);
				//cout << s.length()<<endl;
				if(s.length()==0) break;
            }
        }
    }while(found and s.length());
    if(!s.length()) return "Empty string";
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
