// leetcode - Serialize and Deserialize Binary Tree
// https://leetcode.com/problems/serialize-and-deserialize-binary-tree/

// as the data in the tree is in range -1000 to 1000
// we will use -7777 to indicate NULL pointer

class Codec {
public:
    // Encodes a tree to a single string.
    // approach: levelorder traversal is stored in string. All null pointers are indicated by -7777
    string serialize(TreeNode* root) {
        if (root == NULL) {
            return "-7777";
        }
        
        queue<TreeNode*> q;
        q.push(root); 
        
        string ans;
        
        while (q.size()) {
            TreeNode* curr = q.front(); q.pop();
            
            if (curr) {
                ans += to_string(curr->val) + " ";
                q.push(curr->left);
                q.push(curr->right);
            } else {
                ans += "-7777 ";            
            }
        }            
            
        return ans;
    }

    // Decodes your encoded data to tree.
    // generate the tree from the the level order traversal
    // use string stream to easily read input
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        
        queue<TreeNode*> q;
        TreeNode* root = NULL;

        // read the value of root node 
        int x;
        ss >> x;
        
        // if root's value is -7777, the root of the tree is NULL
        // else there is a valid value, allocate memory for it and push it into queue
        if (x != -7777) {
            root = new TreeNode(x);
            q.push(root);
        }
        
        while (q.size()) {
            
            // pop element from queue
            TreeNode* curr = q.front(); q.pop();
            
            // read its left and right child values
            int l, r;
            ss >> l >> r;
                
            // input it's left and right child value
            // note: if any value is NULL(-7777), dont change anything as it's NULL by default
            // after assigning values to children, put them in queue to be be processed
            if (l != -7777) {
                curr->left = new TreeNode(l);
                q.push(curr->left);
            }
            
            if (r != -7777) {
                curr->right = new TreeNode(r);
                q.push(curr->right);
            }
        }
        
        return root;
    }
};
