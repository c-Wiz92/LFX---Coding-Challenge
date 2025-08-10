## The '1dARRAY' directory contains code that uses continuous memory allotment to fill in the matrices. 
<br/>

## The '2dARRAY' directory contains code that uses double pointers to store the matrices as 2D arrays.
<br/>

## The 'Vector Optimized' directory contains benchmark results which used vector instructions via compiler flags. <br/>

### Each directory has the following files, along with readme file. 
naive.c - this is the naive code that is unoptimized<br/>
tiling.c - this is code which uses the loop-tiling approach for better performance<br/>
function.c - this file contains the 2 functions used in the code to allocate memory, fill values. <br/>
headers.h - this file contains the function prototypes
