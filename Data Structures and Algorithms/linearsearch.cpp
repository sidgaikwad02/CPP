#include<iostream>
using namespace std;

int linearseach(int a[], int n, int val){
    for(int i=0; i<n; i++){

        if(a[i]==val)
        return i+1;
    }
    return -1;
}

int main(){

    int a[] = {22,10,14,15,64,82};

    int val= 15;

    int n =  sizeof(a)/sizeof(a[0]);

    int res = linearseach(a,n,val);

    cout<<"The element of the array are -";

    for(int i=0;i<n;i++)

    cout<<a[i]<<" ";

    cout<<"/nElement to be searched is -" << val;

    if(res == -1) 

    cout<<"/nElement is not present in the array ";

    else

    cout<<"/nElemet is present at " << res << " Position of the array ";
    return 0;

}