#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //creating 2d dynamic array
    int** arr = new int*[n]; //make 2d array on heap
//Let me make a short thing little long but your concept about this query will be cleared….. I declared int x where x is integer variable occupying 4 bytes of memory. If I declared int*x then this variable x will be variable that will be of 4 bytes but that will be used to store memory address of another integer variable. So, in int*x is pointer where x is pointer variable used to store memory location or address of other integer variables. That pointer is made on stack of memory location(stack is linear memory model). now if i go to int*x=new int[n], then I am Storing address of memory location of first variables of n consecutive variables that I made on Heap(new is keyword to make/book n consecutive memory locations on heap, in this case I am making an array of integers on heap ).

//Now, in int**x , x is such a 4 bytes variable that is storing address of another pointer, means x in int**x is such a pointer that can store memory address of another pointer variable.

//Now in int**x=new int*[n], new int*[n] means I am booking 4 consecutive memory locations on heap to store address of other integer variables, means I am booking an array of n pointers on heap.

//Now int**x=new int*[n], means I am Storing Address of First Pointer of array of pointer that I had made on Heap. This notation is used to make 2D arrays on heap. 2D arrays is nothing more than An Array containing arrays.
    
    for(int i=0;i<n;i++){ //taking the array elements
        arr[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int col=0;col<n;col++){
        if(col%2==0){
            for(int row=0;row<n;row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=n-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
    //for deleting the array elements
    for(int i=0;i<n;i++){
        delete arr[i];
    }
    delete[] arr;

    return 0;

}