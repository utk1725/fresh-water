string DoMulti(string str,char num){
	int carry=0, n= num-'0';
	string ans;
	for(int i=str.length()-1;i>=0;i--){
		int into= n*(str[i]-'0')+carry;
		ans+=(std::to_string(into%10));
		carry=into/10;
	}
	
	if(carry){
	    ans+=to_string(carry);
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
string add2Carry(string a, string b){
    string ans;
    int one,two,cry=0,i=a.length()-1, j=b.length()-1;
    while(i>=0 or j>=0){
        one= i>=0? a[i]-'0' : 0;
        two= j>=0? b[j]-'0' : 0;
        int ad= one+two+cry;
        ans+=to_string(ad%10);
        cry=ad/10;
        i--;j--;
    }
    if(cry) ans+=to_string(cry);
    return ans;
}
string Solution::multiply(string A, string B){
   string Myans;
   string ::iterator it;
   string carry="0";
   int n=A.length()-1;
	for(int i=n;i>=0;i--){
		string multi= DoMulti(B,A[i]);//cout << multi << " ";
		string adds= add2Carry(multi,carry); //cout << adds << " "; 
		Myans+=(to_string(adds[0]-'0')); //cout << Myans << " ";
		it= adds.begin(); 
		adds.erase(it);
		reverse(adds.begin(),adds.end());
		carry=adds;
	//	cout << carry << "\n";
	}
	if(carry.length()){
	    reverse(carry.begin(),carry.end());
	    Myans+=carry;
	}
	reverse(Myans.begin(),Myans.end());
	while(Myans.length()>1){
	    it=Myans.begin();
	    if(Myans[0]=='0') Myans.erase(it);
	    else break;
	}
	return Myans;
}