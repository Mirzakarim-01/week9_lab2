#include<iostream>
using namespace std;
int fib(int n) {
    if (n<=1) {
        return n;
    }else {
        return fib(n-1)+fib(n-2);
    }
}
    int main() {
        int n_term;
        cout<<"Enter the number of terms"<<endl;
        cin>>n_term;
        for (int i=0; i<n_term; i++) {
            cout<<fib(i)<<" ";
        }
        cout<<endl;
        return 0;
    }