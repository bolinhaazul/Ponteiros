#include <iostream>

using namespace std;

int main(){
    float a[10];
    for(int i=0; i<10;i++){
        cout<<&a[i]<<endl;
    }
    return 0;
}