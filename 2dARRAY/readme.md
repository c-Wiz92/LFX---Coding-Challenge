In this approach, The matrices were declared as 2-D arrays.<br/>

This approach is visibly lesser performing than the 1-D array approach. One reason could be the large number of malloc() calls.<br/>

The naiveReport.txt file contains the gprof benchmarks for the naive approach, and the tile32.txt, tile64.txt & tile128.txt files contain benchmarks for the loop-tiling approach with the varying tile sizes, 32, 64 and 128 respectively.<br/>

There wasn't much of a difference when the tile sizes were 64 and 128. But it was slow with 32. So, 64 seemed like the sweetspot. But I've used tile size 32 in other code, just to check it's performance in the worser case.<br/>
