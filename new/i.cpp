#include<bits/stdc++.h>
using namespace std;

int main(){
    int sec;cin >> sec;
    int hour = sec/3600;
    if(hour < 10){
        cout << "0" << hour << ":";
    }else 
        cout << hour << ":";
    sec = sec%3600;
    //18467
    //18000
    //467
    int min = sec/60;
    if(min < 10){
        cout << "0" << min << ":";
    }else 
        cout << min << ":";
    //467
    //420
    //47
    if(sec%60 < 10){
        cout << "0" << sec%60;
    }else 
        cout << sec%60;
}