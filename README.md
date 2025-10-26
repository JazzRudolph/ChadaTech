This project, the ChadaTech Clock Simulation, was designed to meet the international ISO 8601 standard by simultaneously displaying time in both 12-hour (AM/PM) and 24-hour formats based on user input, while providing options to advance the clock. 
My greatest success lay in implementing solid pass-by-reference logic. 
By using int& in functions like addHour, I ensured that the entire program state  the actual time—was permanently and efficiently updated across the application, which is a transferable skill essential for managing object data in languages like Java. 
Furthermore, the program’s design relied on modular functions and detailed internal comments greatly improved the code's readability and maintainability; stepping away and coming back was much easier thanks to those notes. 
The separation of time calculation logic from the display logic also makes the program easily adaptable if a third clock format were ever needed.
The development process presented significant challenges, particularly organizing the logic within the main function and handling the user input switch cases to correctly differentiate the output style for the two clock formats. 
While I successfully overcame these issues by isolating the logic into separate functions, I see clear areas for enhancement. The current layout is somewhat repetitive, and the variable names could be more distinct to prevent confusion. 
Moving forward, I would refine my naming conventions and adopt a more organized, object-oriented approach to improve overall structure. 
I now recognize that a cleaner design reduces debugging time and makes the program far more secure and efficient in the long run.
