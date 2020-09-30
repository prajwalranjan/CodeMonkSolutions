#include <iostream>

using namespace std;

int main() {
    int T;
    cin>>T;

    while(T--) {
        int N;
        cin>>N;
        int M[N][N];
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                cin>>M[i][j];
            }
        }

        int count=0;
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                for(int x=i; x<N; x++) {
                    for(int y=j; y<N; y++) {
                        if(M[i][j] > M[x][y]) {
                            count++;
                        }
                    }                    
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}