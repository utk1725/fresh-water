class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int, vector<int>, greater<>> min_heap;
    priority_queue<int, vector<int>, less<>> max_heap;
    MedianFinder() {

    }

    void addNum(int num) {
        if(!min_heap.size()) min_heap.emplace(num);
        else{
            if(num >= min_heap.top()) min_heap.emplace(num);
            else max_heap.emplace(num);
        }
        if(min_heap.size() > max_heap.size()+1){
            max_heap.emplace(min_heap.top());
            min_heap.pop();
        }
        else if(max_heap.size() > min_heap.size()){
            min_heap.emplace(max_heap.top());
            max_heap.pop();
        }
    }

    double findMedian() {
        return min_heap.size()==max_heap.size() ? 0.5*(min_heap.top()+max_heap.top()) : min_heap.top();
    }
};
