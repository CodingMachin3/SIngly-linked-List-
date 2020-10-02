class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
class Linkedlist:
    def __init__(self):
        self.head=None

    def traverselist(self):
        temp=self.head
        while temp:
            print(temp.data)
            temp=temp.next

list1=Linkedlist()
list1.head=Node(4)
node2=Node(5)
node3=Node(6)
list1.head.next=node2
node2.next=node3

list1.traverselist()
        
