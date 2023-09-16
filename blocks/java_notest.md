* LinkedList<TreeNode> que = new LinkedList<TreeNode><>();
    - que.poll() -> removes and returns the first element of the list
* PriorityQueue<Integer> pq = new PriorityQueue<>();
     * By default above `pq` is min-heap.
     * If we want max heap, need to initialization such a way that `new PriorityQueue<>(Collections.reverseOrder())`;
     * If we want some custom order, for example, we are inserting a treeNodes and we want to preserve some order
          * if we pass to objects A, B to the compare function, and we want A to be present before B in the final sort order, we need to return -1/negative number. If we want A to be present after B in the final sort order, we need to return +1/positive number. Think number line and we want to put A, B on the number line. If we need A first, return -1. If we need A to the right end, return +1
       ```
       Comparator<Integer> comp = new Comparator<Integer>() {
        @Override
        public int compare(Integer n1, Integer n2) {
            if(n1 > n2) {
                return -1;
            } else {
                return 1;
            }
         }
        };
      ``` 
* What is the difference between add and offer. why are the two methods, both doing the same thing?
```
  In Java, both the add and offer methods are used to add elements to a Queue, but there is a subtle difference in their behavior:

   *  add Method:
        It is inherited from the Collection interface.
        If the queue is full (e.g., in a bounded queue with a maximum capacity), attempting to add an element that would exceed the capacity will throw an exception (IllegalStateException with a message like "Queue full").
        Use add when you expect that adding an element to the queue should always succeed, and any failure to do so indicates a programmatic error.

    offer Method:
        It is specifically defined in the Queue interface.
        If the queue is full, attempting to offer an element that would exceed the capacity will return false, indicating that the addition failed.
        Use offer when you want to handle the case where adding an element might not succeed gracefully without throwing an exception.
```
