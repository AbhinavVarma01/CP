#include<bits/stdc++.h>
using namespace std;
/* void countdigits(int n){
    int count = 0;
    while(n>0){
        int lastdigit = n%10;
        count += 1;
        n = n/10;
    }
    cout<<count;
}

int countdigits(int n){
    int count = (int)(log10(n)+1);
    return count;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int result = countdigits(n);
    cout<<result<<endl;
}*/

int armstrongnum(int n){
    int orig = n;
    int sum = 0;
    while(n!=0){
        int lastNum = n%10;
        sum = sum + (lastNum * lastNum * lastNum);
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter Num: ";
    cin>>n;
    int res = armstrongnum(n);
    if(res == n) cout<<"It is ArmStrong Num"<<endl;
    else cout<<"It is not an armstrong num"<<endl;;
}