#include <iostream>
#include <string>
using namespace std;

bool check_lapindrome(string str){
    int last_ind = str.size()-1;
    int first_ind = 0;
    int hash[256] = {0};
    while(first_ind < last_ind){
        int first_char_asci = str[first_ind]+0;
        int last_char_asci = str[last_ind]+0;
        hash[first_char_asci]++;
        hash[last_char_asci]--;
        first_ind++;
        last_ind--;
    }
    for(int ind=0;ind<255;ind++)
        if (hash[ind] != 0) return false;
     return true;
}
int main() {
	int t_case;
	scanf("%d", &t_case);
	string str;
	while(t_case--){
	    cin >> str;
	    bool is_lapindrome = check_lapindrome(str);
	    if(is_lapindrome) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}
