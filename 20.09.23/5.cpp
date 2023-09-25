#include <bits/stdc++.h>

using namespace std;

int main(){
    //for(бастапқы,шарты,кадам)
    
    //бастапкы
    //while(шарты){
        //кадам
    //}
    int i;
    // for( i = 1;i <= 100;i++)
    //     cout << "E ";
    //     cout << i << ' ';
    //int i = 1,int;
    while(i <= 10){
        //1,...,100
        //i++;
        //2,...,101
        //1,2,..,100
        //cout << i << ' ';
        //1 2 3 4 , 6 7 8 9 10
        //5,5,5,5,5,5,5,5,5,5,5
        //6,7,8,9
        if(i == 5){
            
            i++;
            //6
            continue;
        }            
        cout << i << " ";
        i++;
    }
}