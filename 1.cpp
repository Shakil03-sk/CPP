#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your Number :";
    cin>>n;
    for(int i=0;i<=n;++i){
        for(int j=1;j<=i;++j){
            cout<<i;
        }
        cout<<" "<<endl;
    }
}