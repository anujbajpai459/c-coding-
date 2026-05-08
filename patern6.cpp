#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter a value";
  cin>>n;
  for(int i=0;i<n;i++){
    char ch ='A'+i;
    for(int j=0;j<=n;j++){
       cout<<char(ch+j)<<" ";
    }
    cout<<endl;
  }
}