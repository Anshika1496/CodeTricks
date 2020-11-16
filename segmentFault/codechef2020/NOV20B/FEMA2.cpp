//https://www.codechef.com/NOV20B/problems/FEMA2

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int callme(int i, int j, int k, char str[]) {
    int s = 0, count = 0,  M, I;

        for(int k1 = i; k1 < j; k1++) {
            if(str+k1 == "i") {  I = k1; }
            if(str+k1 == "m") {   M = k1; }

             
        }

            int pow = k+1-(M-I)-s;

            return count;

}

int main() {
    int t;

    cin>>t;
    while(t) {
        int n,k, res, res1, res2; char str[n];

        cin>>n>>k;
        cin>>str;

        for(int k1 = 0; k1 != '\n'; k1++) {
            if(str[k1] == 'X') {
                res1 = callme(0, k1-1, k, str);
                res2 = callme(k1+1, n, k, str);
                res = res1 + res2;
            }
            
            else {
             res = callme(0, 0, k1, str); 
            }
        }

        t--;
    }
    return 0;
}
