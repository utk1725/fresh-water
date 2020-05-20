'''
https://jeffknupp.com/blog/2014/06/18/improve-your-python-python-classes-and-object-oriented-programming/
'''
class Node:
    def __init__(self,data):
        self.data= data;
        self.next= None;
        
class LinkedList:
    def __init__(self):
        self.head= None;
        
    def insertAtbegin(self,data):
        newnode= Node(data);

        if not self.head:
            self.head= newnode;
            return;
        newnode.next= self.head
        self.head= newnode;
        
    def insertAtend(self,data):
        newnode= Node(data)

        if not self.head:
            self.head= newnode;
            return;
        tmp= self.head;
        while tmp.next:
            tmp= tmp.next;
        tmp.next= newnode;
        
    def printList(self):
        tmp= self.head;

        while tmp:
            print (tmp.data),
            tmp= tmp.next;
             

llist= LinkedList();

llist.insertAtbegin(1);
llist.insertAtbegin(11);
llist.insertAtbegin(111);
llist.insertAtend(2);
llist.insertAtend(22);
llist.insertAtend(222);
llist.printList();
