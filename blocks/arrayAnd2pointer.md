### Container with maximum water:
https://leetcode.com/problems/container-with-most-water/description/ <br>
It is just straight 2pointer approach. 
why we move pointer with the lower height is because we already have the max area with that height - since it is the lower pointer that means that every other distance that is closer will always be a smaller distance with the same or less height which means smaller area. 
Therefore we do not need to look at every other combination with that pointer.
