void leftView(Node *root)
{
	if(!root) return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		int n=q.size();
		for(int i=1;i<=n;i++){
			Node* tmp=q.front();
			q.pop();
			if(i==n) printf("%d ",tmp->data);
			if(tmp->left) q.push(tmp->left);
			if(tmp->right) q.push(tmp->right);
		}
	}
}