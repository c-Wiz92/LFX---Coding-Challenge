In this approach, I declared the matrices as a continuous block in an 1-D array. <br/>

This approach had better performance than when I used 2-D array approach, which was less performant due to the function call overhead, etc.<br/>

#### The naiveRep.txt file contains the gprof benchmarks for the naive approach, and the tilingRep.txt contains the same for the loop-tiling approach.<br/>
