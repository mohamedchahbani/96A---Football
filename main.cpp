#include<bits/stdc++.h>
using namespace std;

int main(){
    string ch;
    int l,nb=0,i=0;
    bool ok;
    cin >>ch;
    l=ch.length();
   while((i<l)&&(nb<7)){
        nb=1;
        ok=false;
        while ((i<l-1)&&(ch[i]==ch[i+1])&&(nb<7))
        {
            if (!ok){
                ok=true;
            }
            nb++;
            i++;

        }
        if(!ok){
            i++;
        }

    }
    if (nb==7)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    
    return 0;
}