class StockSpanner {
    stack<int>mark;
    stack<int>weight;
    
public:
    StockSpanner() {
    }
    int next(int price) {
        int w=1;
        while(!mark.empty() && mark.top() <= price){
            mark.pop();
            w=w+weight.top();
            weight.pop();
        }
        mark.push(price);
        weight.push(w);
        return w;
    }
};
