* LinkedList<TreeNode> que = new LinkedList<TreeNode><>();
    - que.poll() -> removes and returns the first element of the list
* PriorityQueue<Integer> pq = new PriorityQueue<>();
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
