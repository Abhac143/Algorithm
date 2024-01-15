
//Iterative Approach

#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> &input, int target) {

    int lo=0;       //Start of the search space
    int hi = input.size()-1;        //End of the search space
    while(lo<= hi) {
        int mid= (lo+hi)/2;
        if(input[mid]==target)
        return mid;
        else if(input[mid]< target){
            lo= mid+1;
        }
        else {
            hi= mid-1;
        }
    }
    return -1;
    }
    
    
    
    
int main() {
    int n;      //no of elements 
    cin>>n;
    vector<int>input;
    for(int i=0; i<n; i++){     //  Elements 
        int x;
        cin>>x;
        input.push_back(x);   //pushing back my elements to input

    }
    int target;         //Target element to search 
    cin>> target;
    int result = BinarySearch(input , target);
        
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}





