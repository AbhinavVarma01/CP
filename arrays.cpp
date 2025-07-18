//MAXIMUM ELEMENT IN AN ARRAY:
/*#include<bits/stdc++.h>
using namespace std;

int maxnum(int arr[], int n){
    int maxVal = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>maxVal){
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Max element is: "<<maxnum(arr,n);
    return 0;
} */


//SECOND LARGEST ELEMENT IN AN ARRAY:
/* #include<bits/stdc++.h>
using namespace std;

int seclargestnum(int arr[], int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]<max2 && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    return(max2 == INT_MIN) ? -1 : max2;
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = seclargestnum(arr,n);
    if(result == -1){
        cout<<"No sec largest elem!";
    }
    else{   
        cout<<"Sec largest elem is: "<<result;
    }
    return 0;
} */


//ARRAY IS SORTED OR NOT
/* #include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i = 0 ; i< n-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter num of elem:";
    cin>>n;
    int arr[n];
    cout<<"Enter elem: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isSorted(arr,n)){
        cout<<"Yes array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
} */


//REMOVE DUPLICATES:
/* #include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[],int n){
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cout<<"Enter num of elem:";
    cin>>n;
    int arr[n];
    cout<<"Enter elem: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int newLength = removeDuplicates(arr,n);
    cout<<"Unique Elements: ";
    for(int i=0;i<newLength;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nCount is: "<<newLength;
    return 0;
} */


//REVERSE AN ARRAY
/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter num of elem:";
    cin>>n;

    int arr[n];
    cout<<"Enter elem: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,arr+n);
    cout<<"Reversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string x = s;
    reverse(x.begin(),x.end());
    if(x==s){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"Its not a palindrome";
    }
    return 0;
}
