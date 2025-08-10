## The '1dARRAY' directory contains code that uses continuous memory allotment to fill in the matrices. 
<br/>

## The '2dARRAY' directory contains code that uses double pointers to store the matrices as 2D arrays.
<br/>

## The 'Vector Optimized' directory contains benchmark results which used vector instructions via compiler flags. <br/>

### Each directory has the following files, along with a brief readme file. 
naive.c - this contains naive code that is un-optimized<br/>
tiling.c - contains optimized code which uses loop-tiling for better performance<br/>
function.c - this file contains the 2 functions that are used in the above files to allocate memory and fill values<br/>
headers.h - this file contains the function prototypes
.txt files - the final gprof benchmark reports
