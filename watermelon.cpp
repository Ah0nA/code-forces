#include <bits/stdc++.h>

using namespace std;

bool divisibleByTwo(int t){

    if (t % 2== 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int y;
    cin >> y;

    if (y < 0){
        cout<<"NO" <<endl;;
    }

    bool truth = divisibleByTwo(y);
    if(truth == true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
return 0;
}