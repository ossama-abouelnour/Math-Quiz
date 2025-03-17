Math Quiz Game

📌 Description

This is a simple Math Quiz Game written in C++ functional/procedural programming that tests the user's arithmetic skills. Users can choose the number of questions, difficulty levels, and types of mathematical operations. The game provides feedback on correct and incorrect answers and calculates final results based on performance.

This project is a console-based application and does not include any graphical UI or external frameworks. It relies solely on standard input/output (cin/cout) for user interaction. The only system-dependent feature is the system("color") command, which changes the console color based on correct or incorrect answers (Windows-specific).

✨ Features

🔢 Supports four difficulty levels: Easy, Medium, Hard, and Mixed.

➕➖✖️➗ Offers five types of mathematical operations: Addition, Subtraction, Multiplication, Division, and Mixed.

🎲 Randomly generates math problems based on the chosen difficulty and operation type.

✅❌ Provides instant feedback on correct and incorrect answers.

📊 Displays final quiz results, including the number of correct and incorrect answers.

🔄 Allows users to play multiple rounds until they choose to exit.

🛠️ How to Compile and Run

🔹 Compilation

Ensure you have a C++ compiler installed (e.g., g++). If using Visual Studio, open the Project_2_Math_Quiz.sln solution file and build the project.

For command-line compilation with g++, use the following command:

 g++ -o math_quiz_game math_quiz_game.cpp

🔹 Running the Game

After compiling, run the executable:

 ./math_quiz_game

Or if using Visual Studio, run the compiled project from the IDE.

🎮 Game Instructions

1️⃣ Enter the number of questions you want to answer (between 1 and 10).
2️⃣ Select a difficulty level:

1: 🟢 Easy

2: 🟡 Medium

3: 🔴 Hard

4: 🔀 Mixed
3️⃣ Choose the type of arithmetic operation:

1: ➕ Addition

2: ➖ Subtraction

3: ✖️ Multiplication

4: ➗ Division

5: 🔄 Mixed operations
4️⃣ Solve the randomly generated math problems.
5️⃣ Receive immediate feedback on your answers.
6️⃣ View your final score and results.
7️⃣ Choose to play again or exit the game.

📂 Code Structure

🔢 RandomNumber(int From, int To): Generates a random number within a given range.

🔣 GetOpTypeSymbol(enOperationType OpType): Returns the symbol of the chosen arithmetic operation.

❓ GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OpType): Creates a math question based on difficulty and operation type.

✅❌ CorrectTheQuestionAnswer(stQuizz& Quizz, short QuestionNumber): Checks the user's answer and provides feedback.

📊 PrintQuizzResults(stQuizz Quizz): Displays the final game results.

🔄 StartGame(): Manages the game loop, allowing the user to play multiple rounds.

💻 System Requirements

🖥️ C++ Compiler (GCC, Clang, MSVC, etc.)

🏁 Windows (for system color changes) or a compatible terminal environment.

🎯 Visual Studio (if using the .sln file).

⚠️ Known Issues

➗ Division questions may generate non-integer results, but the program currently works with integer-only calculations.

🎨 Console color change feature may not work correctly on some operating systems.

🚀 Future Improvements

✍️ Improve division operation to handle floating-point numbers.

🎨 Implement a graphical interface for better user experience.

🏆 Add a scoring and leaderboard system.

📜 License

This project is licensed under the MIT License.
