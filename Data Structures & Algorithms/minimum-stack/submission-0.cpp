class MinStack {
public:
    vector<int> v;
    MinStack() {
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v[v.size() - 1];
    }
    
    int getMin() {
        vector<int> v1;
        v1 = v;
        sort(v1.begin(), v1.end());
        return v1[0];
    }
};
