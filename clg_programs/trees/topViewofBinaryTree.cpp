void topView(struct Node* root){
	if(!root) return;
	int hd=0;
	queue<pair<Node*,int>> q;
	q.push({root,hd});
	unordered_map<int,int> umap;
	while(!q.empty()){
		pair<Node*,int> tmp=q.front();
		q.pop();
		Node* cur=tmp.first;
		hd=tmp.second;
		if(umap.find(hd)==umap.end()){
			umap[hd]=cur->data;
			printf("%d ",cur->data);
		}
		if(cur->left) q.push({cur->left,hd-1});
		if(cur->right) q.push({cur->right,hd+1});
	}
}