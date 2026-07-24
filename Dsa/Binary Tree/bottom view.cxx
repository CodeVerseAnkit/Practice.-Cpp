#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;
// Binary Tree
// node class
class node
{
  public:
    int val;
    node *left;
    node *right;
    node(int data)
    {
        val = data;
        left = right = NULL;
    }
};
// build binary tree
static int idx = -1;
node *buildTree(vector<int> preordered)
{
    idx++;
    // base condition
    if (preordered[idx] == -1)
        return NULL;
    node *root = new node(preordered[idx]); // new node
    root->left = buildTree(preordered);     // left
    root->right = buildTree(preordered);    // right
    return root;
}
void BottomView(node *root)
{
    queue<pair<node *, int>> q;
    map<int, int> mp;
    q.push({root, 0});
    while (!q.empty())
    {
        node *curr = q.front().first;
        int hd = q.front().second;
        q.pop();

        mp[hd] = curr->val;
        if (curr->left)
            q.push({curr->left, hd - 1});
        if (curr->right)
            q.push({curr->right, hd + 1});
    }
    for (auto m : mp)
        cout << m.second << " ";
    cout << endl;
}
int main()
{
    vector<int> vec = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    node *root = buildTree(vec);
    BottomView(root);

    return 0;
}