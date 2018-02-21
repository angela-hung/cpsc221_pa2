#include "stack.h"


// returns the top element of the stack
// returns a default (0,0) point if stack is empty
Point Stack::peek(){
    if (st.size() != 0){
        return st[st.size() - 1];
    } else {
        Point p;
         return p;
    }
}

// returns number of elements in the stack
int Stack::size(){
    st.size();
}

// returns true if the stack is empty, false otherwise
bool Stack::isEmpty(){
    return st.size() == 0;
}


// mutators
// adds an item to the top of the stack
void Stack::push(Point p){
    st.push_back(p);
}

// removes and returns the top element of the stack
// returns a default (0,0) point if stack is empty
Point pop(){
    Point p = peek();
    st.erase(st.size()-1);
    return p;
}
