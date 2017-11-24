#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        cout<<2*x2-x1<<" "<<2*y2-y1<<endl;
    }
    return 0;
}
