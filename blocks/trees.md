- **Full Binary Tree**: All levels completely filled
- **Complete binary tree**: Every level except possibly the last is completely filled. And all nodes in the last level are as far left as possible. It can have 1 to `2^h` nodes at level `h`. In other words, complete binary tree is a full binary tree till `h-1`th level. And the last level nodes will be filled from left to right.
- **Height**: Maximum depth / the length of the longest path from root to leaf.


 #### Size of the tree
- `return root ? size(root->left) + size(root->right) : 0;`
- 
