# Note:

# Keep the usage of in-built function to the minimum
# addOneEle/Optimize  features
# Please follow best coding practices
# addOneEle comments if necessary
# And make the Code Bug free

#create a class named stack
class Stack:
    def __init__(self):
        self.items = []

	# to check weather the stack is empty
    def isEmpty(self):
        return self.items == []

	# to push the element to the stack
    def push(self, item):
        print("Pushed: ",item)
        self.items.append(item)

	# to pop the element out of the stack
    def pop(self):
        print("Popped: ",end="")
        return self.items.pop()

	# to return top element of the stack 
    def peek(self):
        return self.items[len(self.items)-1]

	#to return the size of the stack
    def size(self):
        return len(self.items)

	#to print the stack elements
    def print_stack(self):
        print("Stack: ",end="")
        for i in range(0, len(self.items)):
            print(self.items[len(self.items)-i-1], end=" ")
        print()

#driver code
s=Stack()
s.print_stack()
print("The size of the stack is", s.size())
s.push(10)
s.print_stack()
print("The size of the stack is", s.size())
s.push(20)
s.print_stack()
print("The size of the stack is", s.size())
print("The top element is", s.peek())
print(s.pop())
s.print_stack()
print("The size of the stack is", s.size())



# Please refer Stack.cpp program and code in python