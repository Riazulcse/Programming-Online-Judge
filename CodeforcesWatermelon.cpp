#include<iostream>
using namespace std;
int main()
{
    int w=0;
    cin>>w;
    string output=(w<=2||w%2)? "YES" : "NO" ;
    cout<<output<<endl;
    return 0;
}
