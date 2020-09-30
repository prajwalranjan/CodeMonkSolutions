#include <iostream>

using namespace std;

int main() {
    
    //Test Cases
    int T;
    cin>>T;
    
    //Array Size and no of rotations
    int N, K;
    
    while(T--) {
        cin>>N>>K;
        int arr[N], newArr[N];
        
        for(int i=0; i<N; i++) {
            cin>>arr[i];
        }

        // cout<<endl;
        // shiftArr(arr, N, K);
        int temp;
        K = K%N;
        for(int i=0; i<N; i++) {
            temp = arr[(i+(N-K))%N];
            // cout<<temp<<" ";
            newArr[i] = temp;
        }

        for(int i=0; i<N; i++) {
            cout<<newArr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}