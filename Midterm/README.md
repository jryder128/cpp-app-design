James Ryder (Student ID: 30108962) C++ Application Design
Completed modules: 01, 02, 03, 04, 05, 06, 07, Midway
C++ Midway Project: Battle Royale Simulator

This program simulates a free-for-all multiplayer deathmatch. I originally designed it as a fun way to “draw names out of a hat,” but eventually, this program will act as the framework for a simple role-playing game.
The program starts by prompting the user to input how many combatants are going to participate in the battle, then the user gives each combatant a name. Upon entering a name, the program assigns that combatant a randomly-generated number of hit points, a strength value, and a weapon.
Once all the names have been entered, the program generates a text file with a play-by-play description of the battle, consisting of funny verbs and body parts. Every turn, each combatant attacks every other combatant with a 50% chance to hit. If an attack hits, the damage done is determined by multiplying the combatant’s strength value by their weapon damage. This continues until all but one of the combatants’ hit points are less than or equal to zero.
When the battle has concluded, the user is able to search for a name to see how they performed during the battle. This loop continues until the user enters ‘quit.’
This program includes or demonstrates all of the requirements for the midway project:
  - Data types and data sizes
  - File types (e.g., .txt for data I/O)
  - Use of pointers
  - arrays
  - A binary search algorithm (or any other search)
  - Use of strings
  - File I/O (read from or write to a file)
  - At least two classes
However, even though this program includes multiple inherited classes, only the combatant class is currently functional. The functionality of the other classes will be implemented at a later date.

Instructions: Compile the source files in the IDE of your choice and run the executable.
