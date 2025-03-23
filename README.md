# Random Drawing Probability Calculator

**Background**

Probability is the measure of the chance or likelihood that some random event will occur. Calculating probabilities allows you to use logic and reason even with some degree of uncertainty. Probability can be calculated using the following expression:

**Probability = Number of Favorable Outcomes / Total Number of Outcomes**

or

**P(A) = k / N**

Where:

**P(A)** = Probability of an event (event A) occurring

**k** = Number of ways the event can occur (frequency)

**N** = Total number of outcomes possible

For example, how do we calculate the probability of rolling a 6 sided fair die twice and getting two 6's?

For this example

Number of ways an event can occur (frequency) is 1

The total number of outcomes possible is equal to 36 because each time the die is rolled you can get any of 6 outcomes.

So, the probability of rolling two 6's is equal to 1 divided by 36 which equals .0277




Purpose of Assignment


This assignment has the following purposes:

* Practice analyzing a problem requiring functional decomposition
* Practice creating functions to implement modular solution


Complete the given template, Lab15.cpp, that will calculate the probability of winning a lottery within the following parameters. The program will prompt the user to specify the number of numbered balls in a set of 1-12 and the number of balls to be drawn that the user will try to match of the winning numbers between 1 and the size of the selection set chosen. The order of the selected numbers is not significant. The program should output the probability of matching the drawn numbers and the odds of matching the drawn numbers.

**Program Steps**

The program functions must carry out the following steps:

* Get and validate how many numbers there are to choose from (n).
* Get and validate how many of these numbers must be selected (k).
* Compute the number of ways a set of k items can be selected from a set of n items.
* Report to the probability and odds of winning.

**Functional Decomposition**

The program must contain the following functions that carry out the operations in the given descriptions. Use the function names given in the table. All data must be passed to required functions by value or reference; no global variables are allowed.

<table>
<tr><td>main</td><td>This function, provided in the Lab14Driver.cpp template file, organizes calls to other functions, and reports results.</td></tr>
<tr><td>getInfo</td><td>This function gets and validates the number of numbers to select from (n) and the number that must be chosen (k). Range as well as data type must be validated for both n (size of pool) and k (number to match).</td></tr>
<tr><td>computeWays</td><td>This function computes the number of different sets of size k that can be chosen from n numbers. The compute ways formula is: P(A)=k!(n-k)!/n!</td></tr>
<tr><td>factorial</td><td>this function computes factorials recursively. It is called by computeWays.</td></tr></table>

**Example Test Cases**
<table><tr><td>
<samp>
How many balls (1-12) are in the pool to pick from? 7  
<br/>How many balls (1-7) will be drawn? 9
<br/>Input Error!
<br/>How many balls (1-7) will be drawn? 3
<br/><br/>Probability of winning is 0.0286
<br/>Odds of winning are 1 in 35
<br/><br/>Would you like to calculate the probability of another scenario? (y/n): y
<br/><br/>How many balls (1-12) are in the pool to pick from? 14
<br/>Input Error! There must be between 1 and 12 balls.
<br/>How many balls (1-12) are in the pool to pick from? 12
<br/>How many balls (1-12) will be drawn? red
<br/>Input Error! 
<br/>How many balls (1-12) will be drawn? 5
<br/><br/>Probability of winning is 0.0013
<br/>Odds of winning are 1 in 791
<br/><br/>Would you like to calculate the probability of another scenario? (y/n): n
</samp>

</td></tr></table>

Validation
https://www.lotterycritic.com/lottery-calculators/lottery-odds-calculator/
