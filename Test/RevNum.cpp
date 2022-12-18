#include<iostream>
using namespace std;

void rev(int n){
    if (n==0)
    return;
    cout<<n<<endl;

    rev(n-1);


}

int main(){
    rev(5);

}
