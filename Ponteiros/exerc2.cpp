#include <iostream>

using namespace std;

void troca(){

}

int main(){
    int *a, *b, *c,d,e,f;
    cout<<"Entre com valores para a, b e c: "<<endl;
    cin>>d;
    cin>>e;
    cin>>f;
    a=&d;
    b=&e;
    c=&f;
    cout<<*a<<" "<<*b<<" "<<*c<<endl;
}