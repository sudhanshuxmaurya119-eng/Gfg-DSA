#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
