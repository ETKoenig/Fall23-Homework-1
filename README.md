# Homework # 1 - Operators, Expressions, Constants, and Data Types (including File IO)
## Overview
This assignment is worth 20 points. Full Collaboration is authorized however all work must be your own and you must understand everything submitted.  You must submit your .cpp file to the D2L dropbox once complete.

## Before you Start
Ensure that you have read the lessons on [cplusplus.com](https://cplusplus.com/doc/tutorial/)

## Procedures
### [Structure of a Program](https://cplusplus.com/doc/tutorial/program_structure/) Write the basic outline of a C++ Program (2pts)
Write a program that prints `Hello,TOOP!`. You may choose to use explicit scope qualifications or a declaration.
### [Variables and types](https://cplusplus.com/doc/tutorial/variables/) Initialize a few variables for later on (3 pts)
Declare the following variables
- A string called `name`. This is the name of the user.
- An integer call `age`. This is the age in whole number years of the user.
- A double call `decimalAge`. This is a decimal value representing how old the use is in portions of a year.  For example, if I were 19 years and three months old, I would be 19.25 years old.
### [Basic input and ouptut](https://cplusplus.com/doc/tutorial/basic_io/) Request and store some input from the user (10 pts)
You will initialize the variables you just created with the user's response.
- Request a user's full name (first and last) and store it in `name`
  >**Note**
  >you might not want to use cin for this!
- Request a user's age and store it in `age`.
- Request the number of months since the user's last birthday.  You will then initialize `decimalAge` to the proper value.
  >**Note**
  >It may be helpful to use intermediary variables to assist in the calculations.
- You will then print a summary to the user of the information entered.  Your output shoudl model the response shown below:
```
Hello, TOOP!
Please enter your name: George P Burdell
Please enter your age in years: 94
Please enter the number of monthis since your last birthday: 7
Your name is George P Burdell, and you are 94.5833 years old!
```
### [IO with files](https://cplusplus.com/doc/tutorial/files/) We want to keep a record of who has used our program (for posterity's sake!). (5 pts)
- To do this, we will keep a record of all users' names and decimal ages in a file called `history.txt`.  This file will be maintained in the local directory
>**Note**
> You will want to append data!
- Each line should be formatted `[name]:[decimalAge]`
  
