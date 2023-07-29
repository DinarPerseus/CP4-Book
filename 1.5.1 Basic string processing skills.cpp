//Dinar Perseüs
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t="";
    while (getline(cin,s)){
    	if(s.rfind(".......",0)==0) break;
        t+=" "+s;
    }
    cout<<t;
}
