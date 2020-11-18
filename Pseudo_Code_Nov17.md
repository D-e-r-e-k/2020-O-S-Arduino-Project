# Pseudo Code Practice
>Count from 1 to 10
```
Create memory for CurrentNumber, start from 1.
Loop until CurrentNumber is greater than 10:
    Count CurrentNumber.
    Increase CurrentNumber by 1.
```

>Count from 1 to 10, 10 times
```
Create memory for TimesCounted, start from 0.
Create memory for CurrentNumber, start from 1.
Loop until TimesCounted equals 10:
    Reset CurrentNumber to 1.
    Loop until CurrentNumber is greater than 10:
        Count CurrentNumber.
        Increase CurrentNumber by 1.
    Increase TimesCounted by 1.
```

>Count from 10 to 1
```
Create memory for CurrentNumber, start from 10.
Loop until CurrentNumber is less than 1:
    Count CurrentNumber.
    Decrease CurrentNumber by 1.
```

>Count from 1 to 10, repeatedly
```
Create memory for CurrentNumber, start from 1.
Loop repeatedly:
    Reset CurrentNumber to 1.
    Loop until CurrentNumber is greater than 10:
        Count CurrentNumber.
        Increase CurrentNumber by 1.
    Increase TimesCounted by 1.
```

>Count from 1 to 100 by 5s
```
Create memory for CurrentNumber, start from 1.
Loop until CurrentNumber is greater than 100:
    Count CurrentNumber.
    Increase CurrentNumber by 1.
    Wait until 5s/100*CurrentNumber has passed.
```

>Create a Fibonacci sequence
```
Annotation: Since this one is a challenge, here's a function for finding the nth element of Fibonacci Series using dynamic programming written in pseudo code.

Create memory for MemerizedFib which is a series of numbers, start with [0, 1].
Create function FindNthFibNum which takes argument n:
    If the length of MemerizedFib is not shorter than n:
        The nth element in MemerizedFib is the result.
    Otherwise:
        FindNthFibNum(n-1)+FindNthFibNum(n-2) is the result, and append the result to the end of MemerizedFib.