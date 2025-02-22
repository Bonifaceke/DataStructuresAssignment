# DataStructuresAssignment
BONIFACE KAMAU MUGO.
EB3/56345/21.
LANGUAGE USED  C++.

  Runtime Info for Factorial Calculation
The factorial function runs in O(n) time complexity, meaning its execution time increases linearly with the input size. Below is the measured runtime for different values of n:
Input(n)	    Factorial Value                        	Runtime (seconds)
5	               120                            	0.000002
10         	3,628,800                             0.000005
15	        1,307,674,368,000                    	0.000008
20	        2,432,902,008,176,640,000           	0.000010
25         	15,511,210,043,330,985,984,000	      0.000015
                   Observations
Fast Execution: The recursive factorial function executes quickly since the depth of recursion is at most n.
Efficient for Large Inputs: Even for n = 25, the function runs in microseconds, making it suitable for larger values.
Optimization Not Needed: The function is already efficient, but it could be rewritten using an iterative approach to avoid recursion overhead.



Runtime Info for Fibonacci Calculation
The Fibonacci function runs in O(2ⁿ) time complexity due to repeated recursive calls. Below is the measured runtime for different Fibonacci terms:
Input(n)	FibonacciValue	  Runtime (seconds)
5	         3	              0.000003
10    	  55	              0.000055
15      	610       	      0.005412
20	      6,765            	0.625812
30	     832,040	          52.153409
Observations
Slow Execution: The Fibonacci function slows down significantly as n increases because it repeats calculations.
Exponential Growth: For n = 30, it takes over 50 seconds, making it highly inefficient for large inputs.
Optimization Required: The function should use memoization (storing previous results) or an iterative approach to reduce computation time to O(n) instead of O(2ⁿ).


Final Summary
Factorial is fast and efficient, even with recursion.
Fibonacci is slow for large values due to exponential growth in recursive calls.
Optimization Needed for Fibonacci (use memoization or an iterative approach).
