/**
 * Reverses the order of elements in a given stack.
 * 
 * @param stack The stack to be reversed.
 */
void reverseStack(stack<int> &stack) {
    // Write your code here
     
    if(stack.empty())
        return;

  
    int ele = stack.top();
    stack.pop();
     reverseStack(stack);
     std::stack<int> temp;
    while(!stack.empty()){

        temp.push(stack.top());

        stack.pop();

    }
    stack.push(ele);
    while(!temp.empty()){

        stack.push(temp.top());

        temp.pop();

    }


}