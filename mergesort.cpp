//merge sort is array sorting technique using recursion.
/*steps :-
1)write void mergesort function in which recursively call it two times
one time from l to mid and second time from mid+1 to e (l,mid,e gives starting mid and end position of an array) it returns us two sorted array 
after merging them(after merge function is called.)
2)merge function :-
i)make two temparary arrays store the value of arry from l to mid-l-1 in one array and mid+1 to end in other array.
ii)now compare them with each other and update them in given array correctly so that whole array can be sorted.
*/
#include<iostream>
using namespace std;
 

void merge(int arr[], int l, int mid, int h)
{
    // declaring 2 arrays
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int a[n1];
    int b[n2];

    // Initailising n1 
    for(int i=0; i<n1; i++) {
        a[i] = arr[l + i];
    }

    // Initailising n2
    for(int i=0; i<n2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    int i=0; 
    int j =0;
    int k = l;

    // comparing both arrays and adding values to new array
    while(i<n1 && j<n2) {
        if(a[i] < b[j]) {
            arr[k] = a[i];
            k++; 
            i++;
        }
        else {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    // if extra element present at end of a[]
    while(i<n1){
        arr[k] = a[i];
        k++;
        i++;
    }

    while(j<n2) {
        arr[k] = b[j];
        k++;
        j++;
    }

}

void mergesort(int arr[],int l,int end){
    int mid=(l+end)/2;
    if(l<end){
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,end);
        merge(arr,l,mid,end);

    }
}  



int main(){
int arr[]={5,4,3,66,2,1};
mergesort(arr,0,5);
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}  