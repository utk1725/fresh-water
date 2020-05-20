stack<int> stk;
stack<int> minStk;
MinStack::MinStack() {
    while(!stk.empty()){
        stk.pop();
    }
    while(!minStk.empty()){
        minStk.pop();
}
}

void MinStack::push(int x) {
    stk.push(x);
    if(minStk.empty()) minStk.push(x);
    else {
        if(x <= minStk.top()) minStk.push(x);
    }
}

void MinStack::pop() {
    if(!minStk.empty() and !stk.empty()){
        if(stk.top() == minStk.top()) minStk.pop();
    }
    if(!stk.empty()) stk.pop();
}

int MinStack::top() {
    if(stk.empty()) return -1;
    else return stk.top();
}

int MinStack::getMin() {
    if(minStk.empty() or stk.empty()) return -1;
    else return minStk.top();
}

