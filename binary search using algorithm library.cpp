#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5},k=2;
    if(binary_search(arr,arr+5,k)){
        cout << "Found";
        
    }
    else{
        cout << "Not Found";
    }
    
}
