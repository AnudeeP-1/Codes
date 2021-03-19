package Java;

public class Stack {
    /* Java program to implement basic stack 
operations */
	static final int MAX = 1000; 
	int top; 
	int a[] = new int[MAX]; // Maximum size of Stack 

	boolean isEmpty() 
	{ 
		return (top < 0); 
	} 
	Stack() 
	{ 
		top = -1; 
	} 

	boolean push(int x) 
	{ 
		if (top >= (MAX - 1)) { 
			System.out.println("Stack Overflow"); 
			return false; 
		} 
		else { 
			a[++top] = x; 
			System.out.print("Pushed "+x); 
			System.out.println();
			return true; 
		} 
	} 

	int pop() 
	{ 
		if (top < 0) { 
			System.out.println("Stack Underflow"); 
			return 0; 
		} 
		else { 
			int x = a[top--]; 
			return x; 
		} 
	} 

	int peek() 
	{ 
		if (top < 0) { 
			System.out.println("Stack Underflow"); 
			return 0; 
		} 
		else { 
			int x = a[top]; 
			return x; 
		} 
	}

	//to display the stack element
	void print(){
		int j = top;
		System.out.print("Stack: ");
		for(int i=j;i>=0;i--){
			System.out.print(a[i]+" ");
		}
		System.out.println();
	}

// Driver code 
	public static void main(String args[]) 
	{ 
		Stack s = new Stack(); 
		s.print();
		s.push(10); 
		s.print();
		s.push(20);
		s.print();
		System.out.println("Popped " +s.pop() ); 
		s.print();
	} 
}

