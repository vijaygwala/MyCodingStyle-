import java.util.*;
 class Ai_dfs{
	public void dfstraversal(Node root) {
		Stack<Node> openlist = new Stack<Node>();
		Stack<Integer> closelist = new Stack<Integer>();
		openlist.add(root);
		while (openlist.isEmpty() == false) {
			Node x = openlist.pop();
			if(x.right!=null) 
				openlist.add(x.right);
			if(x.left!=null) 
				openlist.add(x.left);			
			closelist.add(x.data);
		}
			for (int k : closelist) 
				System.out.print(k+" ");
	}
	public static void main(String args[]){
		Node root = new Node(1);
		root.left = new Node(2);
		root.left.left = new Node(4);
		root.left.right = new Node(5);
		root.right = new Node(3);
		root.right.left = new Node(6);
		root.right.right = new Node(7);
		
		Ai_dfs b = new Ai_dfs();
		System.out.println("Depth-First-Search : ");
		b.dfstraversal(root);
	}
}

class Node {
	int data;
	Node left;
	Node right;

	public Node(int data) {
		this.data = data;
		left = null;
		right = null;
	}
}