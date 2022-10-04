// Binary,Octa,Hexa to Decimal 

#include <iostream>
using namespace std;

int bintodec(int n){
    int ans = 0;
    int x =1;
    while(n){
    
    int y = n%10;
    ans = ans + x*y;
    x *=2;
    
    n /= 10;
    }
    return ans;
}

int octtodec(int n){
    int ans = 0;
    int x = 1;
    while(n){
     int y = n%10;
     ans = ans + x*y;
     x *= 8;
     n /=10;
    }
    
    return ans;
}

int hextodec(string n){
    int ans = 0;
    int x = 1;
    int siz = n.size();
    
    for(int i=siz-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            
            ans += x*(n[i]-'0');
        }
        
        else if(n[i]>='A' && n[i] <= 'F'){
            ans += x*(n[i] - 'A' +10);
        }
        
        x *= 16;
    }
    
    return ans;
}

int main(){
    
    string str;
    cin>>str;
    int n;
    
    int ans = bintodec(n);
    int ans2 = octtodec(n);
    int ans3 = hextodec(str);
    cout<<ans3;
    
    return 0;
}