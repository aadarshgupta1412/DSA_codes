# Problem

1. https://leetcode.com/problems/domino-and-tromino-tiling/

# Solution
Recursive solution: a(n) = 2 * a(n-1) + a(n-3)  
General solution: a(n) = a(n-1) + a(n-2) + 2 * (a(n-3) + ... a(1))  
a(1) = 1; a(2) = 2; a(3) = 5

# Resources

1. https://www.geeksforgeeks.org/tiling-problem/
2. https://www.geeksforgeeks.org/count-number-ways-tile-floor-size-n-x-m-using-1-x-m-size-tiles/
3. https://arxiv.org/ftp/arxiv/papers/2108/2108.08909.pdf
