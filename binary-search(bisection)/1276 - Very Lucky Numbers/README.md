## Key Idea
<b>WE WILL PRECALCULATE</b><br>
1) we will generate all lucky number through recurssion. as using 4,7 there is atmost 11 digit and at each position there is two option either 4 or 7 
So this recursion complexity will be 2<sup>11</sup> $'/approx'$ 2000.
2) Now using these 2k lucky number we will make very lucky number. In straight forward look the complexity is 2000<sup>2000</sup> which is huge.
 But we do not need any number bigger then 10<sup>12</sup> . For the verry small lucky number which is 4 to make 10<sup>12</sup> which is log<sub>4</sub>10<sup>12</sup> = 20
 And for biggest lucky number 77777777777 to make 10<sup>12</sup> log<sub>77777777777</sub>10<sup>12</sup> = 1. 
 So average of them is (20+1)/2=11 So total complexity of lucky number 2000 * 11 = 22000.:smile:
