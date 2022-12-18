#include<iostream>
using namespace std;

int solution1(int n){
    if ((n==0 || n==1))
        return 1;

    int res = n*solution1(n-1);
         return res;
}


int main(){
    int n;
    n=5;
    int res = solution1(n);
    cout<<"factorial of " <<n<< " is "<<res<<endl;

}
