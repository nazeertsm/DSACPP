#include<iostream>
using namespace std;
int main(){

    string s="apple";
    
    int left=0;
    int right = s.length()-1;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[left]!= s[right]){
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        else{
            left++;
            right--;

        }
        
    }
    cout<<"Palindrome"<<endl;
    
}