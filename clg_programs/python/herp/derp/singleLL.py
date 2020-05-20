import Node

class singleLL(object):

    def __init__(self):
        self.head=None;
        self.counter=0;

    def insertStart(self,data):

        self.count+=1;

        newnode= Node(data);

        if not self.head:
            self.head= newnode;
        else:
            newnode.next= self.head;
            self.head=newnode;

                
