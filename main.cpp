#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter number";
    cin>>x;
    int ans[100];
    int k=0;
    while(x>=1){
        ans[k]=x%2;
        k++;
        x=x/2;
    }
    cout<<"\n";
    for(int i=k-1;i>=0;i--)
        cout<<ans[i];

    return 0;
}
