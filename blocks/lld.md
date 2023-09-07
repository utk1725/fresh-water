### LLD

- https://massivetechinterview.blogspot.com/2015/07/design-chess-game-using-oo-principles.html

- https://www.geeksforgeeks.org/design-a-chess-game/

- https://xmruibi.gitbooks.io/interview-preparation-notes/content/OOD/DesignExamples/ChessGame.html

* SOLID: 
* DRY principle: Don't Repeat Yourself. It is a software development principle aimed at reducing code duplication and promoting code reusability, maintainability, and consistency. The idea behind the DRY principle is to avoid duplicating the same logic, code, or information in multiple places within a software system.
* YAGNI: "You Aren't Gonna Need It," is a software development principle that advises against adding functionality or features to a software system unless they are currently necessary to meet the immediate requirements. In other words, it suggests that you should avoid adding functionality that you anticipate needing in the future but don't actually need right now.
* KISS: The KISS principle, which stands for "Keep It Simple, Stupid," is a design principle in software development that emphasizes the importance of simplicity and avoiding unnecessary complexity. The principle suggests that systems, designs, and solutions should be kept as simple as possible, while still fulfilling their intended purpose and requirements.
* Abstract class VS interfaces: <br>
   - When we need multiple inheritance, need to use interfaces. A class can only inherit one class but can inherit multiple interfaces
   - If we want to share common code, use abstract classes. Inside the abstract class, a few methods can be implemented and shared with child classes in common
   - Interface is a contract

###### Data Hiding (Encapsulation & Abstraction)
* Hide the details. Expose only interface. Restrict unauthorized access.
* Data Hiding can be divided into two components
     * Encapsulation
          * Binding data and methods to manipulate the data together in a single unit / class
          * A good way to achieve this is by declaring all variables inside the class as private. Use getters and setters to communicate with outside classes
          * Ex: private varaibles inside a class & getters and setters
     * Abstraction
          * Simplifies the program structure
          * Shows only required information. Shows what it does but hides how it does.
      * Differences btwn Abstraction and Encapsulation
         * Abstraction means to hide implementation using interface and abstract classes. & Encapsulation means to hide data using getter and setter functions.
         * It highlights the work that the object performs & It deals with the internal working of the object.
         * It hides unnecessary data to simplify the structure. & It restricts access to data to prevent its misuse.
         * It focuses on the design level of the system. & It focuses on the application level of the system.
       
  


#### Links
* github interviewready/low-level design
