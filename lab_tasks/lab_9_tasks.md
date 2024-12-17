# Lab 9: Pointers

## **Task 1: Swap Two Numbers Using Pointers**

### **Objective**

Create a C++ program to swap the values of two variables using pointers.

---

### **Instructions**

1. **Function Arguments:**
   - A pointer to the first integer.
   - A pointer to the second integer.

2. **Function Logic:**
   - The function should **not return any value**.
   - Instead, it should swap the values of the two integers by dereferencing their respective pointers.

3. **Use Temporary Variable:**
   - Use a temporary variable to hold one of the values during the swap process.

4. **Input:**
   - The user must input two integers.

5. **Output:**
   - Display the values of the two integers before and after swapping.

**Function Signature:**

```cpp
void swapNumbers(int* num1, int* num2)
```

### Sample Output

``` text

Enter two numbers: 5 10

Before swapping: a = 5, b = 10  
After swapping: a = 10, b = 5

```

## **Task 2: Find Largest and Smallest Elements in an Array Using Pointers**

### **Objective**

Create a C++ program to find the **largest** and **smallest** elements in an array of integers using pointers.

---

### **Instructions**

1. **Function Arguments:**
   - A pointer to the array of integers.
   - The size of the array.
   - A pointer to an integer variable to store the largest element.
   - A pointer to an integer variable to store the smallest element.

2. **Function Logic:**
   - The function should **not return any value**.
   - Instead, it should directly modify the largest and smallest values via their respective pointers.

3. **Use Pointer Arithmetic**:
   - Traverse the array using pointer arithmetic to find the largest and smallest elements.

4. **Input:**
   - The user must input 8 integers to populate the array.

5. **Output:**
   - Display the largest and smallest elements in the array.

**Function Signature:**

   ```cpp

   void findLargestSmallest(int* arr, int size, int* largest, int* smallest)
   ```

**Hint:**

*(arr + 2) refers to the 3rd element in the array pointed to by arr.

---

### **Sample Output**

``` text
Enter 8 integers: 12 45 3 22 8 11 23 40
The largest element is: 45
The smallest element is: 3
```
