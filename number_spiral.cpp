#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long t; cin>>t;
    for (long long i=0; i<t; i++){
        long long r; long long c;
        cin>>r>>c;
        if (r<=c && c%2==0){
            cout<< (c-1)*(c-1) + r <<endl;
        }
        else if(r<=c && c%2==1){
            cout<< (c-1)*(c-1) + 2*c -r <<endl;
        }
        else if(r>c && r%2==0){
            cout<< (r-1)*(r-1) + 2*r -c <<endl;
        }
        else {
            cout<<(r-1)*(r-1) + c <<endl;
        };
    };
    
}

