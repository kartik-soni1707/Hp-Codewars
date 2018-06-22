#include <iostream>
#include <math.h>
using namespace std;
void top();
void bottom();
void space(int x);
int main()
{
    int x;
    cout<<"Enter number";
    cin>>x;
    cout<<"\n";
    for(int k=0;k<x;k++){
    int j=x-k;
    space(j);
    for(int c=k+1;c>0;c--)
    {top();
    cout<<" ";
    }cout<<"\n";
    j=x-k;
    space(j);
    for(int c=k+1;c>0;c--){
    bottom();
    }
    cout<<"\n";

    }
    return 0;
}
void top(){
cout<<" /\\";
}
void bottom(){
cout<<"/__\\";
}
void space(int k){
while(k>1){
    cout<<"  ";
    k--;
}
}
