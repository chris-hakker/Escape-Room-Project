# Puzzle Room 
Authors: [Benedict Ignacio](https://github.com/Benedict-Ignacio), [Victor Lee](https://github.com/VLee9124), [Marcos Vasquez-Munoz](https://github.com/Marcos4440), [Christopher Hakker](https://github.com/chris-hakker)

## Project Description
Synopsis: Our project will be a text-based puzzle RPG similar to that of an escape room. Here, players are given clues and have to solve a series of riddles and questions in order to progress through the story and ultimately escape the room and/or reach the good ending of the game.

Purpose: We found this concept interesting because as computer science students, we’ve always had confidence in our problem solving skills. Although our main purpose of this program is to entertain users, we want to do so by tapping into their own problem solving abilities, and creating puzzles/mysteries are one of the most entertaining and thrilling methods of doing so. We wanted to take this a step further and incorporate an “escape room” aspect to our program, where the order of puzzles that we have to solve is intentionally obscured to give players a sense of wonder and mystery.

Tools/Languages: We will use the following tools to assist with development:
* C++ language and standard libraries
* VSCode as main IDE
* Github for version tracking
* CMake for generating build files

Input/Output: All of the necessary user input and output will be done on the terminal.
* Input - Our program will require users to do the following directly onto the terminal:
   * Choose from a list of options (e.g. choosing a number from 1 to 5)
   * Enter characters to open settings (e.g. pressing ‘I’ to open the inventory)
   * Enter strings/text (e.g. entering a passcode)
* Output - The user will be able to read the following directly from terminal output:
   * General User Interface (e.g. users will be reminded of which button to press to open the inventory system)
   * Text Dialogue (e.g. reading a note will bring up the following text onto the terminal, which may be used for a clue to another puzzle)
   * Scene Dialogue (e.g. users will be given feedback immediately after they’ve performed a certain action)

Features: The following lists will describe all our planned features, from most to least important:
* Menu System - The user interface that will be used to interact with the game’s puzzles
* Inventory System - Users will input a character onto the menu system to immediately open the inventory system, where they will interact with the items they’ve already collected from the room
* Puzzles - These are the main obstacles of the game. They lock the player from progressing past them (e.g. locked chest, locked door) unless they can solve the puzzle. Examples of puzzles include finding a key to open a keylock and finding a certain combination to enter on a keypad.

 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` (aka Sprint Backlog) column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots on Tuesday of week 6. The check-ins will occur on Zoom. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.
<img width="2500" alt="Navigation Diagram" src="https://github.com/cs100/final-project-vlee084-bigna003-chakk001-mvasq094/assets/86755705/f2836463-6801-4e44-9c00-7de6994811f1">
### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs, expected output, and buttons (if applicable). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
