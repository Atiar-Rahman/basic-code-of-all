#include <bits/stdc++.h>
using namespace std;

struct Node
{
    uint32_t skill;              // XOR skill of the stack
    vector<int> cows;            // order of cows in this stack
    unordered_map<int, int> pos; // cow index -> position in stack
};

int n, q;
vector<uint32_t> orig_skills;
vector<uint32_t> curr_skills;
int size_;
vector<Node> tree;

void merge_nodes(Node &left, Node &right, Node &parent)
{
    // Determine winner
    if (left.skill > right.skill)
    {
        parent.skill = left.skill ^ right.skill;
        parent.cows = left.cows;
        parent.cows.insert(parent.cows.end(), right.cows.begin(), right.cows.end());
    }
    else if (right.skill > left.skill)
    {
        parent.skill = left.skill ^ right.skill;
        parent.cows = right.cows;
        parent.cows.insert(parent.cows.end(), left.cows.begin(), left.cows.end());
    }
    else
    { // tie, left wins
        parent.skill = left.skill ^ right.skill;
        parent.cows = left.cows;
        parent.cows.insert(parent.cows.end(), right.cows.begin(), right.cows.end());
    }
    // build position map
    parent.pos.clear();
    for (int i = 0; i < (int)parent.cows.size(); i++)
    {
        parent.pos[parent.cows[i]] = i;
    }
}

void build_tree()
{
    size_ = 1 << n;
    tree.resize(2 * size_);
    // Initialize leaves
    for (int i = 0; i < size_; i++)
    {
        tree[size_ + i].skill = curr_skills[i];
        tree[size_ + i].cows = {i};
        tree[size_ + i].pos[i] = 0;
    }
    // Build internal nodes
    for (int i = size_ - 1; i > 0; i--)
    {
        merge_nodes(tree[i << 1], tree[i << 1 | 1], tree[i]);
    }
}

void update(int idx, uint32_t val)
{
    int pos = idx + size_;
    tree[pos].skill = val;
    // cows vector and pos map at leaf remain same (only skill changes)
    pos >>= 1;
    while (pos > 0)
    {
        merge_nodes(tree[pos << 1], tree[pos << 1 | 1], tree[pos]);
        pos >>= 1;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> q;
        int size_ = 1 << n;
        orig_skills.resize(size_);
        curr_skills.resize(size_);
        for (int i = 0; i < size_; i++)
        {
            cin >> orig_skills[i];
            curr_skills[i] = orig_skills[i];
        }

        build_tree();

        for (int _ = 0; _ < q; _++)
        {
            int b;
            uint32_t c;
            cin >> b >> c;
            b--; // zero-based index

            // Update skill of cow b temporarily
            update(b, c);

            // Find position of cow b in root stack
            int ans = tree[1].pos[b];

            cout << ans << "\n";

            // Revert skill
            update(b, orig_skills[b]);
        }
    }

    return 0;
}
