#include<iostream>
#include<map>
using namespace std;
int main(){

  cout<<"Changes in the branch - Fetch and sync using github" ;
  string s;

  map<int,string> m;

  for(int i = 0;i < 5; i++ ) {
    if (i%2==0) {
      m[i] = "even";
    }
    else {
      m[i] = "odd";
    }
  }

  for(auto it: m) {
    cout<<it.first<<" "<<it.second<<endl;
  }
    return 0;
}