# Runtime Analysis of Factorial and Fibonacci Programs

## Student Information
**RegNo**: EB3/61567/22  
**Name**: Simon Ipara

## Factorial Program Runtime Calculation
1. **Initialize `result`**:
   - Runtime: 1 microsecond

2. **Loop (n times)**:
   - Each iteration runtime: 1 microsecond
   - For `n = 10`: Total iteration runtime: 10 * 1 microsecond = 10 microseconds

3. **Return the final result**:
   - Runtime: 1 microsecond

4. **Total runtime**:
   - Initialization time + Total iteration time + Return time = 1 microsecond + 10 microseconds + 1 microsecond = 12 microseconds

## Fibonacci Program Runtime Calculation
1. **Base Case Checks**:
   - Runtime: 1 microsecond + 1 microsecond = 2 microseconds

2. **Initialization of `a`, `b`, and `fib_n`**:
   - Runtime: 1 microsecond + 1 microsecond + 1 microsecond = 3 microseconds

3. **Loop (n times)**:
   - Each iteration runtime: 3 microseconds
   - For `n = 10`: Total iteration runtime: 9 * 3 microseconds = 27 microseconds

4. **Return the final result**:
   - Runtime: 1 microsecond

5. **Total runtime**:
   - Base case time + Initialization time + Total iteration time + Return time = 2 microseconds + 3 microseconds + 27 microseconds + 1 microsecond = 33 microseconds
