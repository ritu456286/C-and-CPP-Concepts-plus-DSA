//segment tree problem-codeforces
#include <bits/stdc++.h>
using namespace std;

void buildTree(int low, int high, int indx, vector<int>& seg, vector<int>& arr, int currOp){
    //leaf node
    if(low == high){
        seg[indx] = arr[low];
        return;
    }
    int mid = low + (high - low) / 2;
    buildTree(low, mid, 2 * indx + 1, seg, arr, !currOp);
    buildTree(mid + 1, high, 2 * indx + 2, seg, arr, !currOp);
    if(currOp == 1)
        seg[indx] = seg[2 * indx + 1] | seg[2 * indx + 2];
    else 
        seg[indx] = seg[2 * indx + 1] ^ seg[2 * indx + 2];
    
    return;
}

void updateTree(int low, int high, int indx, int p, int b, vector<int>& seg, int currOp){
    if(low == high){
        seg[indx] = b;
        return;
    }

    int mid = low + (high - low) / 2;
    
    if(p <= mid) updateTree(low, mid, 2 * indx + 1, p, b, seg, !currOp);
    
    else updateTree(mid + 1, high, 2 * indx + 2, p, b, seg, !currOp);
    
    if(currOp == 1)
        seg[indx] = seg[2 * indx + 1] | seg[2 * indx + 2];
    else 
        seg[indx] = seg[2 * indx + 1] ^ seg[2 * indx + 2];
    return;
}


int main(){
    int n, m, p, b;
    cin >> n >> m;
    int currOp = n % 2 == 0 ? 0 : 1; //XOR = 0, OR = 1

    vector<int> arr((1 << n));
    for(int i = 0; i < (1 << n); ++i) cin >> arr[i];

    vector<int> seg(4 * (1 << n) + 1);
    buildTree(0, (1 << n) - 1, 0, seg, arr, currOp);

    for(int i = 0; i < m; i++){
        cin >> p >> b;
        p = p - 1;
        updateTree(0, (1 << n) - 1, 0, p, b, seg, currOp);
        arr[p] = b;

        cout << seg[0] << endl; //top-ele
    }

    return 0;

}