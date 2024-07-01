class Solution:
    def dailyTemperatures(self, T: List[int]) -> List[int]:
            
        n = len(T)
        result = [0] * n  # Initialize result list with zeroes
        stack = []  # Stack to store indices of temperatures

        for i in range(n):
            # While stack is not empty and current temperature is greater than temperature at index of top of stack
            while stack and T[i] > T[stack[-1]]:
                idx = stack.pop()  # Get the index from the top of the stack
                result[idx] = i - idx  # Calculate the number of days until a warmer temperature
            # Push the current index onto the stack
            stack.append(i)

        return result

