class Node:
    def __init__(self,data):
        self.data= data;
        self.left= None;
        self.right= None;
        
    def insert(self,data):
        if data< self.data:
            if not self.left:
                self.left= Node(data);
            else:
                self.left=.insert(data);
        else:
            if not self.right:
                self.right= Node(data);
            else:
                self.right.insert(data);
    def getMin(self):
        if self.left is None:
            return self.data;
        else:
            return self.left.getMin();
    def getMax(self):
        if self.right is None:
            return self.data;
        else:
            return self.right.getMax();

    def inorder(self):
        if self.left is not None:
            self.left.inorder();
        print (self.data);
        if self.right is not None:
            self.right.inorder();

    def remove(self,data, parentNode):
        if data< self.data:
            if self.left is not None:
                self.left.remove(data,self);
        elif data> self.data:
            if self.right.is not None:
                self.right.remove(data,self);
        else:
            if self.left is not None and self.right is not None:
                self.data= self.right.getMin();
                self.right.remove(self.data, self);
            elif parentNode.left == self:
                if self.left is not None:
                    tmp= self.left;
                else:
                    tmp= self.right;

                parentNode= self.right;
            elif parentNode.righ== self:
                if self.left is not None:
                    tmp= self.left;
                else:
                    tmp= self.right;
                parentNode.right= tmpNode;

