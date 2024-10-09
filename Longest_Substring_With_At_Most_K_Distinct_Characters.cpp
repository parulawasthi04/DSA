#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="bbcddddeee";
    int k=2;
    map<char,int>mp;
    int l=0,r=0,maxLen=0;
    while(r<s.length()){
        mp[s[r]]++;
        if(mp.size()>k){
            if(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]]==0)
                mp.erase(s[l]);
                l++;
            }
        }
        if(mp.size()<=k){
            maxLen=max(maxLen,r-l+1);
        }
        r++;
    }
    cout<<maxLen;
}