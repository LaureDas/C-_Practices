#include <iostream>
#include <math.h>
using namespace std;

//exercise 1
bool digits(string str){

    for(int i=0; i<=str.length(); i++){
        if(str[i]<'0'||str[i]>'9'){
            return false;
        }
        else{
            return true;
        }
    }
    return false;
}
//exercise 2
int number_pair(string str){
    int counter=0;
    int index_temp;
    string temp;
    for(int i=0; i<str.length()+1; i++){
        temp=str.substr(i,2);
        index_temp=i;
        cout<<"temp: "<<temp<<endl;
        cout<<"temp[0]: "<<temp[0]<<endl;
        cout<<"temp[1]: "<<temp[1]<<endl;
        for(int j=0; j<str.length()+1;j++){
            if(temp[0]==str[j] && temp[1]==str[j+1] && j!=index_temp){
                counter++;
                cout<<"one pair "<<endl;
                cout<<"j: "<<j<<endl;
                cout<<str[j]<<str[j+1]<<endl;
            }
        }

    }
    return counter;
}

int main(){
    string str;
    int count_pairs;
    //cout<<"input a string"<<endl;
    //cin>> str;
    //cout<<digits(str);
    count_pairs=number_pair("dfdabf8987ffabuut");
    cout<<count_pairs<<endl;
return 0;
}

