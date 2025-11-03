import java.util.*;

class Geeks {

    // Function to insert element into the queue
    static void insert(PriorityQueue<Integer> q, int k) {
        // Just insert k in q
        q.add(k);
    }

    // Function to find an element k
    static boolean find(PriorityQueue<Integer> q, int k) {
        // If k is in q return true else false
        return q.contains(k);
    }

    // Function to delete the max element from queue
    static int delete(PriorityQueue<Integer> q) {
        // PriorityQueue in Java is min-heap by default
        // So we need to get the max manually
        int max = Integer.MIN_VALUE;
        for (int num : q) {
            if (num > max) max = num;
        }
        q.remove(max);  // remove max element
        return max;
    }
}
