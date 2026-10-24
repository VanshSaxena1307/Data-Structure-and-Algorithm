#include<bits/stdc++.h>
using namespace std;
int main(){

    //Vector of pair
    // vector<pair<string, int>>vp;
    // vp.push_back({"Amit",123});
    // vp.push_back({"Lalit",456});
    // vp.push_back({"Alex",789});
    // vp.push_back({"Edward",568});
    // vp.push_back({"Andrew",896});
    // vp.push_back({"Naveen",256});
    // vp.push_back({"Sujit",452});
    
    // for(int i = 0; i<vp.size(); i++){
    //     cout<<vp[i].first<<" "<<vp[i].second;
    //     cout<<endl;
    // }

    // using Tuple
    tuple<string, int, float>T;
    T={"Vansh", 123456, 123.456};
    cout<<get<0>(T)<<", ";
    cout<<get<1>(T)<<", ";
    cout<<get<2>(T)<<", ";
}