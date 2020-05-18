#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

string extractToken(string str, int key){
    char* ans_char_ary = strtok((char*)str.c_str(), " ");
    while(key>1){
        ans_char_ary = strtok(NULL, " ");
        key--;
    }
    return (string)ans_char_ary;
}
int convertToInt(string str){
       int ans = 0;
       for(int index=0; index<str.length();index++){
            ans = ans*10 + (str[index]-'0');
       }
       return ans;
}
bool numericCompare(pair<string,string> str1, pair<string,string> str2){
    string key1 = str1.second;
    string key2 = str2.second;
    return convertToInt(key1) < convertToInt(key2);
}
bool lexioCompare(pair<string,string> str1, pair<string,string> str2){
    string key1 = str1.second;
    string key2 = str2.second;
    return key1 < key2;
}
int main(){
    int number_of_strings;
    cin >> number_of_strings;
    cin.get();
    vector<string> strings(number_of_strings);
    for(int index=0; index<number_of_strings; index++)
        getline(cin, strings[index]);
    int key;
    string reversal, ordering;
    cin >> key;
    cin >> reversal;
    cin >> ordering;
    vector<pair<string, string>> strPair(number_of_strings);
    for(int index=0; index< number_of_strings; index++){
        strPair[index].first = strings[index];
        strPair[index].second = extractToken(strings[index], key);
    }
    if (ordering=="numeric")
        sort(strPair.begin(), strPair.end(), numericCompare);
    else
        sort(strPair.begin(), strPair.end(), lexioCompare);
    if(reversal=="true") reverse(strPair.begin(), strPair.end());
    for(int index=0; index<number_of_strings; index++)
        cout << strPair[index].first << endl;
    return 0;
}