Stage 1: FP tree construction
1. Step 1: Cleaning and sorting
- For each transaction, we first remove the items that are below the minimum support. Then, we sort the items in frequency support descending order.
2. Step 2: Construct FP tree, header table with cleaned itemsets. Loop through the cleaned itemsets, map it to the tree one at a time. If any item already exists in the branch, they share the same node and the count is incremented. Else, the item will be on the new branch created.

- Stage 2: Mine the main tree and conditional FP trees
1. Step 1: Divide the main FP tree into conditional FP trees
   1. Staring from each frequent 1-pattern, we create conditional pattern bases with the set of prefixes in the FP tree. Then, we use those pattern bases to construct conditional FP trees with the exact same method in Stage 1.
2. Step 2: Mine each conditional trees recursively
   1. The frequent patterns are generated from the conditional FP Trees. One conditional FP tree is created for one frequent pattern. The recursive function we used to mine the conditional trees is close to depth-first search.