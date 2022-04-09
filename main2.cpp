#include<bits/stdc++.h>
using namespace std;
int opera;
void fun(int now,int need,int copy){
    if (need==0)return;
    if (copy==0){
        opera++;
        fun(now,need,now);
        return;
    }
    if(copy>=need){
        opera=opera+need;
        fun(now+need,0,0);
        return;
    }
    if(copy<need){
        opera=opera+copy;
        
        now=now+copy;
        need=need-copy;
        fun(now, need, 0);
       
        


    }
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int x,num;
        map<int,int>m;
        cin>>num;
        int n=num;
        while(n--){
        
        cin>>x;
        m[x]++;
        }
        int max=0;
        map<int, int>::iterator itr;
        for (itr =m.begin(); itr != m.end(); ++itr) {
            if( itr->second>max)max=itr->second;
                     
            }
        fun(max,num-max,0);
        cout<<opera<<endl;
        opera=0;
        
        }
        
        

        }

