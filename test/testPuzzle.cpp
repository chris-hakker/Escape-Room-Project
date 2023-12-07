#include <gtest/gtest.h>
#include "../include/puzzle.hpp"

/*Since its an abstract class and solvePuzzle is a pure virtual function, 
I created  class like TestPuzzle for testing*/

#include <gtest/gtest.h>

class TestPuzzle : public Puzzle {
public:
    TestPuzzle(string prompt) : Puzzle(prompt) {}
    bool solvePuzzle() {
        if (!isSolved) {
            isSolved = true;
            return true;  // Successfully solved for the first time
        } else {
            return false; // Puzzle has already been solved
        }
    }
};

// Test case for default constructor 
TEST(TestPuzzleTest, DefaultConstructor) {
    TestPuzzle testPuzzle("Test Puzzle");
    EXPECT_EQ(testPuzzle.getPrompt(), "Test Puzzle");
    EXPECT_FALSE(testPuzzle.getSolved());
}

// Test case for solving the puzzle once
TEST(TestPuzzleTest, SolvePuzzleOnce) {
    TestPuzzle testPuzzle("Test Puzzle");
    EXPECT_FALSE(testPuzzle.getSolved());
    EXPECT_TRUE(testPuzzle.solvePuzzle());
    EXPECT_TRUE(testPuzzle.getSolved());
}

// Test case for solving the puzzle twice
TEST(TestPuzzleTest, SolvePuzzleTwice) {
    TestPuzzle testPuzzle("Test Puzzle");
    EXPECT_FALSE(testPuzzle.getSolved());
    EXPECT_TRUE(testPuzzle.solvePuzzle()); // First attempt
    EXPECT_TRUE(testPuzzle.getSolved());
    EXPECT_FALSE(testPuzzle.solvePuzzle()); // Second attempt should fail
    EXPECT_TRUE(testPuzzle.getSolved()); // Puzzle state remains solved
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
