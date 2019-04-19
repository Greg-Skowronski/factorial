#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int factorial(int);
void tostring(int);

int main(){
    int D, n;
    cin >> D;
    if(D>=1 && D<=30)
    for(int i=0; i<D; i++){
        cin >> n;
        if(n>=0 && n<=1000000000) tostring(factorial(n));
    } 
    return 0;
}

int factorial(int n){
    int out = 1;
    for(int i = n; i >=1; i--)
    {
        out = out * i;
    }
    return out;
}

void tostring(int n){
    string s = to_string(n);
    int l = s.length();
    const int L = l*2-1;
    /*if(l==1) cout << "0 " << s[l-1];
    else cout << s[l-2] << " " << s[l-1];*/
    if(l==1) cout << "0 ";
    for(int i=0; i<L; i++){
        if(i==0) cout << s[0];
        else if(i%2==0) cout << s[i/2];
        else cout << " ";
    }
    cout << "\n";
}