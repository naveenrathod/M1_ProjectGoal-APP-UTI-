# Test plan and Output
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
