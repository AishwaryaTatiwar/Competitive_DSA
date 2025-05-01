#include <iostream>
using namespace std;

int main(){
    int n=3;
    for(int i=3;i>=1;i--){
        for(int sp=0;sp<=n-i;sp++){
            cout<<" ";
        }
        for(int j=1;j<=(i*2)-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    int space=n/2;
    for(int i=n;i>1;i--){
        for(int sp=0;sp<space;sp++){
           cout<<"  ";
        }
        for(int j=1;j<=((n-i)*2)+3;j++){
            cout<<'*';
        }
        cout<<endl;
        space--;
    }


    return 0;
}