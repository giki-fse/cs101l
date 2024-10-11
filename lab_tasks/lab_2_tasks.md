# Lab 2 Tasks

## 1. Number Comparison Program

### Objective

Create a program that accepts two integer inputs from the user and compares them.

### Steps:

1. Prompt the user to input two numbers.
2. Store the numbers in variables.
3. Use an `if-else` statement to determine:
   - Which number is larger.
   - If they are equal, print a message indicating so.

### Example

- **Input**:  
  5, 10
- **Output**:  
  "10 is larger than 5."

---

## 2. Even or Odd Number Checker

### Objective

Write a program that checks whether a given number is even or odd.

### Steps:

1. Ask the user to input a number.
2. Store the number in a variable.
3. Use the modulo operator (`%`) and an `if-else` statement to check:
   - If the number is divisible by 2, print "Even".
   - Otherwise, print "Odd".

### Example

- **Input**:  
  7
- **Output**:  
  "7 is odd."

---

## 3. Health Risk Assessment Based on BMI

**Objective**: Create a program that calculates a person's Body Mass Index (BMI) and classifies their health risk based on the result.

### Steps:

1. Prompt the user to input their weight (in kilograms) and height (in meters).
2. Store the values in variables.
3. Calculate the BMI using the formula:  
   **BMI = weight / (height * height)**
4. Use `if-else` statements to classify the BMI and health risk:
   - BMI < 18.5: "Underweight – Health risk: Low (but increased for other issues)"
   - 18.5 ≤ BMI < 24.9: "Normal weight – Health risk: Low"
   - 25 ≤ BMI < 29.9: "Overweight – Health risk: Moderate"
   - 30 ≤ BMI < 34.9: "Obese Class I – Health risk: High"
   - 35 ≤ BMI < 39.9: "Obese Class II – Health risk: Very High"
   - BMI ≥ 40: "Obese Class III – Health risk: Extremely High"

### Example

- **Input**: Weight = 70 kg, Height = 1.75 meters
- **Output**: "BMI: 22.9 – Normal weight. Health risk: Low."
