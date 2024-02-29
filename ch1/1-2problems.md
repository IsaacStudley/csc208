# Binomial Coefficients

<p> How many 9-bit strings (that is, bit strings of length 9) are there which:

Start with the sub-string 101? Explain.

- This question is really just how many different 6-bit strings there are, which is $2^{6}=64$

Have weight 5 (i.e., contain exactly five 1’s) and start with the sub-string 101? Explain.

- This question can be simplified down to how many unique 6-bit strings contain exactly three 1s, which is 6 choose 3.    $\frac{6!}{3!(6-3)!} = 20$

 Either start with 101 or end with 11 (or both)? Explain.

- This is the number of 6-bit strings plus the number of 7-bit strings minus the number of 4-bit strings. $2^6+2^7-2^4 = 176$ or $64+128-16=176$

<p> Have weight 5 and either start with 101 or end with 11 (or both)? Explain.

- This is the number of unique 6-bit strings contain exactly three 1s plus the number of unique 7-bit strings contain exactly four 1s minus the number of unique 4-bit strings contain exactly one 1, so (6 choose 3) plus (7 choose 3) minus (4 choose 1). $20+\frac{7!}{4!(7-4)!}-4 = 51$