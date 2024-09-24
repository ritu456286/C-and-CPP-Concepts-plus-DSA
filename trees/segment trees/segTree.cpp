#include <bits/stdc++.h>
using namespace std;

class SegmentTree{
    vector<int> seg;
    public:
    SegmentTree(int n){
        seg.resize(4 * n + 1);
    }

    //build, query, pointUpdate
    //0-based indexing in the segment tree array
    void build(int low, int high, int indx, vector<int>& arr){

         //leaf node
        if(low == high){
            seg[indx] = arr[low];
            return; 
        }

        //divide and conquer
        int mid = low + (high - low) / 2;
        build(low, mid, 2 * indx + 1, arr);
        build(mid + 1, high, 2 * indx + 2, arr);

        seg[indx] = min(seg[2 * indx + 1], seg[2 * indx + 2]);

    }

    int query(int low, int high, int indx, int l, int h){
        //no - overlap
        //[low, high] [l, h] || [l, h] [low, high]
        if(high < l || h < low){
            return INT_MAX;
        }
        //complete-overlap
        //[l low high h]
        if(l <= low && h >= high){
            return seg[indx];
        }

        //partial - overlap
        int mid = low + (high - low) / 2;
       
        int leftVal = query(low, mid, 2* indx + 1, l, h);
        int rightVal = query(mid + 1, high, 2* indx + 2, l, h);
        return min(leftVal, rightVal);
        
    }

    void pointUpdate(int low, int high, int indx, int i, int new_val, vector<int>& arr){
        //leaf-node
        if(low == high){
            seg[indx] = new_val; //updating the tree
            arr[i] = new_val; //updating the original array, could've done this update out of the function too;
            return;
        }

        int mid = low + (high - low) /2;
        if(i <= mid){
            //left tree
            pointUpdate(low, mid, 2 * indx + 1, i, new_val, arr);
        }else{
            //right-tree
            pointUpdate(mid + 1, high, 2 * indx + 2, i, new_val, arr);
        }

        seg[indx] = min(seg[2 * indx + 1], seg[2 * indx + 2]);
        return;
    }

    void print(){
        for(int i = 0; i < this -> seg.size(); ++i){
            cout << this -> seg[i] << endl;
        }
    }
};

signed main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    // SegmentTree * seg1 = new SegmentTree(n); //dynamic memory allocation
    SegmentTree seg(n); //stack memory allocation
    seg.build(0, n - 1, 0, arr);
    // seg.print();
    cout << seg.query(0, n- 1, 0, 0, 2) << endl; 

    //update val 1 to -3
    seg.pointUpdate(0, n- 1, 0, 4, -3, arr);
    cout << seg.query(0, n- 1, 0, 1, 1) << endl; 
    
}