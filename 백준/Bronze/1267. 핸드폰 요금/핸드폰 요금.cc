#include <iostream>
using namespace std;

int main() {
    int N, time, Y = 0, M = 0;
    cin >> N;
    
    for(int i=0; i<N; i++) {
        cin >> time;
        Y += (time / 30 + 1) * 10;
        M += (time / 60 + 1) * 15;
    }

    if(Y > M) cout<< "M " << M;
    else if(Y < M) cout<< "Y " << Y;
    else cout<< "Y M " << Y;
    
    return 0;
}