#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int main(){
string line;
string input;
while (getline(cin, line))
{
    if (line == "#")
        break;

    input += line;
}
int k=0;
string f[1000];
int i=0;
while(input.size()>1){
f[i]=input.substr(0,input.find_first_of(";"));
input=input.substr(input.find_first_of(";")+1);

i++;
}
int size = *(&f + 1) -f;
for(int y=0;y<size;y++){
    if(f[y]=="PU")
        cout<<"\nPU;";
    else if((f[y].find_first_of("PA")>0){
           cout<<"\nPD";
           }

    }
return 0;
}
