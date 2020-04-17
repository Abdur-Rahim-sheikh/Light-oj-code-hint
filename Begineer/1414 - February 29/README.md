## Key Idea

* First of all let construct an equation for abstract calculation.
1) If this is year N then how many leap days are from year 1 which is lp(n) = n/4 - n/100 + n/400 (why ==>> think?)
2) So leap year from k year to n year is lp(n)-lp(k-1);
3) Now for the starting year and ending year we have to take care specially so k= starting year + 1 and n=ending year - 1 .
4) 
    I) For starting year we need to know if this is leap year if day and month has already passed 29 february or not.
    II) For ending year we need to know if this is leap year if day and month are covered 29 february or not.


** After all be carefull about string parsing.
