## Key Idea
1) Process each subset if that's a combination.
2) But as n = 30, so total subset will be 2^n so iterate 2^n=(107,37,41,824 > 10^9) which will lead to TLE.
3) But if we make two set of 2^(n/2) which is 2^15 = 32,768 and relate them through binary - search that might lead the problem through efficiency.
