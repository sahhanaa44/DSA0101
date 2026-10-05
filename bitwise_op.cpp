#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int andop=(x&&y);
    int orop=(x||y);
    int notop=(!y);
    cout<<"result 1 "<<andop;
    cout<<"\nresult 2 "<<orop;
    cout<<"\nresult 3 "<<notop;
    return 0;
}
