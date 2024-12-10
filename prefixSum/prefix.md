# PREFIX : Type of Questions

TC : O(N + Q) -> linear
----------------------------------------------

1) Prefix Sum => to calculate sum of subarray in range [a ,b]
{ prefix[b] - prefix[a - 1] }

2) Prefix Frequency => to calculate the frequency of each character in a string within a given range [a, b]
{ prefix[b][character_index] - prefix[a - 1][character_index] } => If you have all 26 characters, then for each prefix, you maintain an array of 26 length, containing each character's frequency
TC : O(N + Q)

<!-- Not sure -->
<!-- 3) Prefix Multiplication=> Not Possible, because division, because instead of subtraction of sums, you may think to divide the products, but that will give incorrect result. -->

4) Minimum/Maximum in a given range[a,b] => Not possible; 
eg : [20, 20, 6, 7, 4]
max till 4th index = 20, 
max till 2nd index = 20,
but max in range [2, 4] = 7 (cannot be answered by prefix)
{ for these, we may use Sparse Table -> O(NlogN + Q)}

5) Subarray Sum >= or == or <= target:
In such questions, the range [a,b] is not given, you have to find this subarray range with the help of the target given. prefix[i] - target, if it is present at index j, that means the subarray from index j + 1 to i, sums upto the target.

## When do we use Prefix Sums?  -erichito
- range sum
- xor, product
- frequency count
- static(no updates) => prefix sum is applied on queries that are static, that is you calculate prefix sum once, and then answer the queries
** FOR DYNAMIC QUERIES, we use Segment Trees

## More ADvanced use cases of Prefix Sums - Errichito
- combine with binary search
- subtree/path sum in a tree
- 2D prefix Sums
- SOS (sum over subset)