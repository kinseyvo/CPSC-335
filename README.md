# CPSC 335 Algorithm Engineering

## Alternating Disks ##
Input: a positive integer n and a list of 2n disks of alternating colors light-dark, starting with light

Output: a list of 2n disks, the first n disks are dark, the next n disks are light, and an integer m representing the number of swaps to move the light ones after the dark ones

Efficiency: O(n^2)

## String Run Encoding ##
Input: a string S of n characters, where each character is a lowercase letter or space

Output: a string C where each run of k repetitions of the character x is replaced with the string "kx"

Example: "heloooooooo there" becomes "hel8o there"

Efficiency: O(n)

## Finding Target Substrings ##
Input: 2 Arrays, the first array containing concatenation of all cities and the second array containing the city names

      Array_A = ["hemetoaklandrialtofullertonmarcolongchinofresnovallejoclovissimithousand"]
      Array_B = [‘clovis’, ‘vallejo’, ‘rialto’, ‘marco’]

Output: 2 Arrays, the first array storing the starting indices of the target words and the second array containing the city names

      Output_1 = [12, 27, 47, 54]
      Output_2 = [‘rialto’, ‘marco’, ‘vallejo’, ‘clovis’]

Efficiency: O(n^2)

## Fibonacci Exhaustive ##
Recursive calculation of each member of the sequence

Input: a non-negative integer *n*

Output: a sequence of Fibonacci numbers leading up to the *n*th term

Efficiency: O(2^n)

## The Golden Ratio ##
Design an algorithm that can obtain a fibonacci number using formulas. A ratio that approximates 1.61803.

Input: a non-floating point positive integer *p* and a non-floating point positive integer *n*

Output: the first 20 terms of the fibonacci sequence

Efficiency: O(1)
