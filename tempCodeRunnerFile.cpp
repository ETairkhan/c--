#include <iostream>

using namespace std;

void calculateTime(int time1[], int time2[]);

int main(){
    int time1[3];
    int time2[3];
    for(int i= 0; i < 3; i++){
        cin >> time1[i];
    }
       for(int i= 0; i < 3; i++){
        cin >> time2[i];
    }
    calculateTime(time1, time2);
    

}


void calculateTime(int time1[], int time2[]){
    for(int i = 0; i < 1; i++){
        cout << time2[i] - time1[i] << ":";
        if(time1[i+2] > time2[i+2]){
            cout << time2[i+1] - 1 -time1[i+1] << ":"; 
            cout << time2[i+2] + 60 - time1[i+2];
        }else{
            cout << time1[i+1] - time2[i+1] << ":";
            cout << time1[i+2] - time2[i+1];
        }
    }
}