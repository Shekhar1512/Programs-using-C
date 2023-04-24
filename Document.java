
class LL{
    
    Node head=null;
	class Node{
		    
		    String data;
		    Node   next;
		    
		    Node(String data){
		        this.data=data;
		        this.next=null;
		    }
	
	}//node class end
	
//insert at first place a node	
	
	public void addFirst(String data){
	    Node newnode = new Node(data);
	    if(head == null){
	        head = newnode;
	        return;
	    }
	    
	    newnode.next=head;
	    head = newnode;
	   
	}
	
//insert a node at last

    public void addLast(String data){
	    Node newnode = new Node(data);
	    if(head == null){
	        head = newnode;
	        return;
	    }
	    
	    Node currNode = head;
	    while(currNode.next!=null)
	    {
	        currNode=currNode.next; 
	    }
	    
	    currNode.next=newnode;
	   
	}
	
//print LL
 
    public void printList(){
	    
	    Node currNode = head;
	    while(currNode!=null)
	    {
	        System.out.println(currNode.data);
	        currNode=currNode.next; 
	    }
	    
	    
	    
	   
	}
        
	
	
	public static void main(String[] args) {
		
		LL list = new LL();
		list.addFirst("a");
		list.addFirst("is");
		list.addLast("list");
		list.addFirst("this");
		
		list.printList();
		
		
		}//main end
		
	
}//main class LL enqd