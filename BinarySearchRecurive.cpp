//Recursive approach for Binar Search algorithm assuming my given array is Sorted .
//The elements present in the array is in ascending order.
#include<iostream>
#include<vector>
using namespace std;
int  BinarySearchRecursive(vector<int> &input, int target, int Lo, int Hi){
    
    //Base Condition or halt condition
    if(Lo<=Hi){
    //Divinding my N array into N/2 
    int mid = Lo + (Hi-Lo)/2;
    if(input[mid] == target){
    return mid;
    }
    else if(input[mid]<target){
        //will search my target element at the right side of the elements from mid
         return BinarySearchRecursive(input, target, mid+1, Hi);
    }
    else{
        return BinarySearchRecursive(input, target , Lo , mid -1);
    }  

    return -1;   //Element not found 

    }

}

int main(){
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cin>>target;
    int result = BinarySearchRecursive(input, target, 0 , n-1);
    if (result!=-1){
        cout<<"Element is found at index  "<<result <<endl ;
    }
    else{
        cout<<"Target element is not present"<<endl;
    }
    cout<<endl;
    return 0;
    }
