#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    for(int i =0; i<s.length();i++){
        if(s[i]>=97 && s[i]<=122)
        s[i] -= 32;
        else s[i] += 32;
    }
    cout<<s<<endl;


}