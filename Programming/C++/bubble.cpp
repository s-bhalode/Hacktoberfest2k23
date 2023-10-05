#include<iostream>
using namespace std;

int main(){
    int i,j, n,temp, Arr[100];

    cout<<"Enter the no. of elements in array: ";
    cin>>n;

    for(i=0 ; i<n ; i++){
        cin>>Arr[i];
    }
    cout<<"\nelements of unsorted array are: \n"<<endl;

    for(i=0 ; i<n ; i++){
        cout<<Arr[i]<<"\t";
    }

    cout<<"\nelements of sorted array are: \n"<<endl;

    for(i=0; i<n;i++){
        for(j=i+1 ; j<n ; j++)
        {
            temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
        }
    }
    
    for(i=0 ; i<n ; i++){
        cout<<Arr[i]<<"\t";
    }



}