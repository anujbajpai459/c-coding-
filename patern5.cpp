#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "enter a value";
    cin >> n;

    for(int i=1; i<=n; i++){

        char ch = 'D' - i + 1;

        for(char j=ch; j<='D'; j++){

            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}