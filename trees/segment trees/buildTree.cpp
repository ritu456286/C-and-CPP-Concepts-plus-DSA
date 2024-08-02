#include <bits/stdc++.h>
using namespace std;

void buildTree(int *a, int s, int e, int *tree, int index)
{
    if(s == e){
        tree[index] = a[s];
        return;
    }
    //post - order
    int mid = s + (e - s) / 2;
    buildTree(a, s, mid, tree, 2 * index);
    buildTree(a, mid + 1, e, tree, 2 * index + 1);
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
    return;
}

int query(int qs, int qe, int s, int e, int* tree, int index){
    //returns minimum in range qs, qe;
    if(s >= qs && e <= qe){
        //complete overlap: [s,e] lies completely inside the [qe, qs]
        return tree[index];
    }
    if(e < qs || s > qe){
        //no overlap
        return INT_MAX;
    }

    //partial overlap -> part of node range lies inside the query range
    int mid = s + (e - s) / 2;
    int left = query(qs, qe, s, mid, tree, 2 * index);
    int right = query(qs, qe, mid + 1, e, tree, 2 * index + 1);
    return min(left, right);
}

void update(int*tree, int& q, int index, int s, int e, int& val){
    //1 - based indexing
    //case where the q is out of bounds
    if(q > e || q < s) return;
    if(s == e){
        tree[index] = val;
        return;
    }
    int mid = s + (e - s) / 2;
    if(q <= mid){
        update(tree, q, 2 * index, s, mid, val);
    }else{
        upadte(tree, q, 2 * index + 1, mid + 1, e, val);
    }
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);

}

int main(){
    int a[] = {1,3,2,-5,6,4};
    int n = sizeof(a)/sizeof(int);
    int* tree = new int[4 * n + 1];

    buildTree(a, 0, n - 1, tree, 1);
    
    int q;
    cin >> q;

    update(tree, 2, 1, )
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << query(l, r, 0, n - 1, tree, 1) << endl;
    }

    for(int i = 1; i <= 13; i++){
        cout << tree[i] << " ";
    }

    return 0;
}