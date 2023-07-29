//Dinar Perseüs
#include<bits/stdc++.h>
using namespace std;

int main(){
	string t,ss;
    getline(cin,t);
    getline(cin,ss);
    int p=-1;
    bool f=1;
    while ((p=t.find(ss,p+1))<t.size()){
    	cout<<p<<" ";
        f=0;
    }
    if(f)cout<<-1;
    cout<<'\n';
    return 0;
}
