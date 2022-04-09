#include<bits/stdc++.h>
using namespace std;
bool all(string s,int n)
{
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}


int main(){
    
    int t,co=1;
    cin>>t;
    
    

    while(t--){
        
        string s;
        cin>>s;
        vector<char>v;
        int l=s.size();
        cout<<"Case #"<<co<<": ";
        if(l==1){
            cout<<s<<endl;
            co++;
            continue;
        }
        
        if(all(s,l)){
            cout<<s<<endl;
            co++;
            continue;
        }
        
        for(int i=0;i<l;i++){
            if(i==l-1){
                v.push_back(s[i]);
                break;
            }
            if(s[i]<s[i+1]){
                v.push_back(s[i]);
                v.push_back(s[i]);
                continue;
            }
            if(s[i]==s[i+1]){
                int count=i;
                while(s[count]==s[i]){
                    count++;
                }
                if(s[count]==NULL or s[count]<s[i]){
                    int m=count-i;
                    
                    while(m--){
                        v.push_back(s[i]);
                        
                    }
                    
                    i=count-1;
                    

                   continue;
                }
                else{
                    int m=count-i;
                    while(m--){
                        v.push_back(s[i]);
                        v.push_back(s[i]);
                        
                    }
                    i=count-1;
                    continue;
                }
                    
                }
                
                
            v.push_back(s[i]);
        }
        for (auto i = v.begin(); i != v.end(); ++i)
                cout << *i;
        
        cout<<endl;
        
        
       
        co++;
        }
        
        

        }

