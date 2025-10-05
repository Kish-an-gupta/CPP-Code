#include<iostream>
using namespace std;

int ans;
int factorial(int n){
    if(n==0){
        return 1;
    }
    
    return ans = n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    factorial(n);
    cout<<ans;
}