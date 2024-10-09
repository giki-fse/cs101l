# Lab 4 Tasks

### 1. Calculate the Area of a Circle (using a manually defined value of π)

#### **Objective**:
Write a C++ program to calculate the area of a circle using a user-provided radius and a manually defined value for π (3.142).

#### **Steps**:

1. **Define π**:
   - Declare a constant variable `pi` with the value `3.142`.

2. **Input**:
   - Prompt the user to input the radius of the circle.

3. **Function Implementation**:
   - Implement a function `calculateAreaOfCircle` that takes the radius as a parameter and returns the area of the circle using the formula: $$
     \text{Area} = \pi \times r^2
     $$
   - Use the manually declared `pi = 3.142`.

4. **Output**:
   - Display the calculated area along with the radius.


### 2. Temperature Conversion Using Enum

#### Objective

Write a function `convertTemperature` that converts a temperature between Celsius, Fahrenheit, and Kelvin. Use an enumerated type to select the desired conversion.

#### Steps:

1. **Create an Enum**: 
   Define an `enum TemperatureScale` with the following members:
   ```cpp
   enum TemperatureScale { Celsius, Fahrenheit, Kelvin };
   ```
2. **Function Signature**: Implement a function `convertTemperature` that takes:
    - A `double` representing the temperature value.
    - A `TemperatureScale` representing the input scale.
    - A `TemperatureScale` representing the desired output scale.
    
3. **Conversion Logic:** Use the following formulas for temperature conversion:

    - **Celsius to Fahrenheit**:  
    $$
    F = (C \times \frac{9}{5}) + 32
    $$

    - **Fahrenheit to Celsius**:  
    $$
    C = (F - 32) \times \frac{5}{9}
    $$

    - **Celsius to Kelvin**:  
    $$
    K = C + 273.15
    $$

    - **Kelvin to Celsius**:  
    $$
    C = K - 273.15
    $$

    - For **Fahrenheit to Kelvin** and **Kelvin to Fahrenheit**, chain the conversions:
    - First, convert Fahrenheit to Celsius or Kelvin to Celsius.
    - Then, apply the conversion from Celsius to Kelvin or Celsius to Fahrenheit, respectively.

4. **Switch-Case for Enum:** Use a switch-case structure to handle the different conversions based on the `inputScale` and `outputScale`.

5. **Handle Edge Cases:** Ensure that the function handles the case where the `inputScale` and `outputScale` are the same (i.e., return the same value without conversion).

##### Examples:
- Convert 100°C to Fahrenheit (212)
- Convert 32°F to Celsius (0)
- Convert 0 Kelvin to Celsius (-273.15)
