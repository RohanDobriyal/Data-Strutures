#include<iostream>
#include<string>
using namespace std;

bool sequence(string s,string t){
    int i=0,j=0;
    while(i<s.length() && j<t.length()){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }
    return (i==s.length());
}
int main(){
    string str1="abc";
    string str2="ahbdc";
    bool result=sequence(str1,str2);
    cout << "Is '" << str1 << "' a subsequence of '" << str2 << "'? " << (result ? "Yes" : "No") << endl;
    return 0;
}