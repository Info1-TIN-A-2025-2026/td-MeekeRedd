# TD 20250930 - Universal gravitational law

## Specs
- insert input data such as mass of the 2 objects and their distance,
- check that the input values are valid
- calc the gravitatinal force between the 2 objects
- display the calculated value on the screen

## Analysis

Choice for design:

the user enters the masses in kg and the distance in mr.
the calculated force is in N.

The display will be in scientific format with 2 digits after the decimal point (example: +1.98e+20)

Inputs
m1 : body mass 1 in kg (double, >0),
m2 : body mass 2 in kg (double >0),
r : distance between the two bodies in m (double >0).
Intermediate variables
N/A

Constants
G : gravitational constant = 6.67 × 10ɲ-11 m�3 kgɲ1 sɲ2 (double).
Outputs
F : force of gravitational attraction in N (double).
PSEUDO-CODE
begin

// Constants
constant G = 6.67e-11 // gravitationnal constant in m^3 kg^-1 s^-2

// Variables
double m1, m2 // mass in kg
double r // distance in m
double F // force in N

display "Enter the mass m1 in [kg]: "
read m1
if m1 <= 0 then
  display "Error: mass m1 must be positive."
  stop
end if
display "Enter the mass m2 in [kg]: "
read m2
if m2 <= 0 then
  display "Error: mass m2 must be positive."
  stop
end if
display "Enter the distance r in [m]: "
read r
if r <= 0 then
  display "Error: distance r must be positive."
  stop
end if

// Compute the gravitational force
F = G * (m1 * m2) / (r * r)
display "The gravitational force F is: ", F, " N"

// Display in scientific notation
display "F=", F in scientific notation 