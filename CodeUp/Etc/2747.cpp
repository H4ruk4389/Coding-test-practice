#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
string str[1001] = {"",};
string re[1001] = {"",};
int cnt[101]={0,};
int ct=0;
int tmp=0;
int main() {
    int i,j;
    int n;
    int m=1;
    
    scanf("%d",&n);
    
    for(i=-1;i<n;i++) {
        getline(cin, str[i]);
    }
    
    
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i!=j && str[i] == str[j] && str[i] != "") {
                cnt[i]++;
                str[j] = "";
                tmp = 1;
            }
            if(tmp = 1 && str[j] != "") {
                re[i] = str[i];
                tmp = 0;
            }
        }

    }
    
  //  for(i=0;i<n;i++) cout << str[i][0] << endl;
    for(i=0;i<n;i++) 
        if(re[i] != "")
            cout << m++ << " " << re[i] << " : " << cnt[i]+1 << endl;
    /*
    for(i=0;i<n-ct;i++) {
        cout << i+1 << " "<< re[i] << " " << cnt[i] << endl; 
    }
    */
    
    return 0;
}
