#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    priority_queue<int, vector<int>, less<>> pq;
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        
        if (x==0){
            if (pq.empty()) cout << 0 << "\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else if (x>=1) pq.push(x);
    }
    
}