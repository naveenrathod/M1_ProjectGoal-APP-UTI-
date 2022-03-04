# TICTACTOE Game
## Table of content
* 1. About the game 
    * Description
    * Identifying features
    * State of art
* 2. Requirements
    * High level requirements
    * Low level requirements
    * SWOT analysis
    * 4W'S AND 1H
* 3. Architecture 
    * UML Diagrams
    * Flowchart
* 4. Implementation
* 5. Test plan and output
    * High level test plan
    * Low level test plan

## 1. About the game
## Description
* TicTacToe is a game in which two players seek in alternate turns to complete a row, a column, or a diagonal with either three O's or three X's drawn in the spaces of a grid.Tic-tac-toe, noughts and crosses, or Xs and Os is a game for two players who take turns marking the spaces in a three-by-three grid with X or O. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row is the winner.If both players are not able to mark in all the possible ways then the game is draw.

## Identifying features
* Showing the grid every time after a mark is done by the player
* Display the player who has won with the grid 
* Display the grid with draw message when the game is drawn
* If player enters wrong input display as wrong input and give another to enter correct input.
## 2. Requirements
## High level requirements
| Id | Description | Category | Status |
|----|-------------|---------|-------|
|HLR1  |Displaying which player goes first| Technical|Implemented|
|HLR2 | Enter player choice|Technical| Implemented|
|HLR3|Display if a player wins |Technical|Implemented|
|HLR4 |When game is tie restart the game freshly|Technical|Implemented|
## Low level requirements
| Id | Description | Category | Status |
|----|-------------|---------|-------|
|LLR1 | Selecting 'X' or 'O'|Technical| Implemented|
|LLR2 | If player enters wrong choice again a chance is given|Technical| Implemented|
|LLR3 | Block with both player choices|Technical| Implemented|
## Swot analysis
![Swot](https://user-images.githubusercontent.com/46956641/154016874-1dba4738-0b71-427c-be8f-b4abbface064.png)
## 4W's and 1H
## WHO-
* This game is just for fun and entertainment .
## WHAT-
* Is easy to play and game we can exit the game at any point.
## WHERE-
* Implemented in mobiles with are basic as well as higher end.
## HOW-
* It is free and can be used by everyone as it's simple.
## 3.Architecture
## 4.Implementation
## Test plan and output
## High level test plan

|Test ID |Description |Expected input |Expected output |Actual output |Type of test|
|---------|-----------------|---------| --------|--------|-------|
|H_01 |Display player choice |Program execution |Formatted display with blocks |Formatted display with block|Requirement|
|H_02 | Taking input from player |User choice |Display user choice |Display user choice|Requirement|
|H_03 | Check if player has won |Program execution|Display if player wins with the block |Display if player wins with the block|Requirement|
|H_04 | Check for tie condition  |Program execution |Display game is tie and restart the game |Display game is tie and restart the game|Requirement|
## Low level test plan
|Test ID |Description |Expected input |Expected output |Actual output |Type of test|
|---------|-----------------|---------| --------|--------|-------|
|L_01 | Displaying the options for the player to select |User choice |Based on the choice functions are called |Based on the choice functions are called |Technical|
|L_02|When wrong input is entered |User choice |Another chance is given for user to enter correct option |Another chance is given for user to enter correct option  |Techincal|
|L_03 |Displaying both player choices with the block|- |Block is displayed with all the choices of both players |Block is displayed with all the choices of both players |Techincal|


