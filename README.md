# Prime-Number-Generator-
New and Effecient way to genarate prime numbers  

A number is prime only when it has two factors, 1 and the number itself.To check a number whether it is prime or not we divide it with numbers between the number that we want to check, and that number should be smaller than the square root of the number that we want to check.

What I found is that to check whether a number is prime or not we only need to divide that number by prime numbers which are smaller than it's square root.And also not check even numbers which also rules out dividing a number by 2.

I made an array filled with prime numbers 3, 5 & 7(not 2 because it's even).Then used these 3 numbers to generate prime numbers up to 100(as biggest number that can be found by (10 * 10) is 100).Stored these prime numbers into the same array.Now we have all primes upto 100, so now we can all primes correctly upto (100 * 100) that is till 10000.And after this we will get all the primes upto 10000, so now we can find all the primes correctly upto (10000 * 10000) that is till 100000000.

This algorithm can find primes upto 100 million under 25 seconds.(It takes 19 seconds on an i7 6th generation).
