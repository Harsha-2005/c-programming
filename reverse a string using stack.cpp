#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main(){
    char arr[20]="India";
    stack<char> s;
    for(int i=0;i<strlen(arr);i++){
        s.push(arr[i]); 
    }
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    return 0;
}
