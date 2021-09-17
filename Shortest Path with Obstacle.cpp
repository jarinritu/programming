#include<iostream>
using namespace std;

int main()
{
    int A,B,F,a1,a2,b1,b2,f1,f2;
    int ans = 0;
    cin>>a1>>a2;
    cin>>b1>>b2;
    if(a1==b1){
        ans = (a2 - b2)+2;
        cout<<ans<<endl;
    }
    else if(a1<b1){
        ans = (b1-a1)+(a2-b2);
        cout<<ans<<endl;
    }
    else{
        ans = (a1+b1);
        cout<<ans<<endl;1
    }
}
