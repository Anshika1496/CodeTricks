//https://www.codechef.com/NOV20B/problems/FEMA2

#include <bits/stdc++.h>
using namespace std;




int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        queue<int> Qb, Qg;
        int count;
        
    
        for(int i = 0; i< n; i++) {
            if(str[i] == 'I') {
                Qb.push(i);
            }
            if(str[i] == 'M') {
                Qg.push(i);
            }
            if(str[i] == 'X' || (i == n - 1)) {
            while(!Qb.empty() || !Qg.empty()) {
                int l = min(Qb.front(), Qg.front());
                int r = max(Qb.front(), Qg.front());
                int counter;
                for(int o = l; o<r; o++) {                
                    if(str[o] == ':') {
                        counter++;
                    }
                }
                if((k+1-abs(l-r) - counter) > 0) {
                    count++;
                    Qb.pop(); Qg.pop();
                }
                 else if(Qg.front()<Qb.front()){
    	                    Qg.pop();
    	                }
    	                else
    	                {
    	                    Qb.pop();
    	                }
            }
             while(!Qb.empty())
    	            Qb.pop();
    	            while(!Qg.empty())
    	            Qg.pop();
    	            
            }
        }
    
        cout<<"res: "<<count;
    }
}

