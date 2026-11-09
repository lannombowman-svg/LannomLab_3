
#include <iostream>
#include <iomanip>
using namespace std;

// ============================================
// Student Grade Calculator
// Names: Your Name and Partner's Name
// Date: November 9, 2026
// Inputs: Three exam scores (0-100)
// Outputs: Average score and letter grade
// ============================================


// Function 1: Calculate the average of three scores.
// Input: Three exam scores
// Output: Numerical average
double calculateAverage(double s1, double s2, double s3)
{
    return (s1 + s2 + s3) / 3.0;
}

// Function 2: Convert the average to a letter grade.
// Input: Numerical average
// Output: Letter grade (A, B, C, D, F)
char getGrade(double avg)
{
    if (avg >= 90)
        return 'A';
    else if (avg >= 80)
        return 'B';
    else if (avg >= 70)
        return 'C';
    else if (avg >= 60)
        return 'D';
    else
        return 'F';
}

// Function 3: Validate scores between 0 and 100.
// Input: One exam score
// Output: true if valid, false if invalid
bool isValidScore(double score)
{
    return score >= 0 && score <= 100;
}

int main()
{
    double score1, score2, score3;

    // Step 1: Get input from the user.
    cout << "Enter Score 1: ";
    if (!(cin >> score1))
    {
        cout << "Error: Enter a valid number." << endl;
        return 1;
    }

    cout << "Enter Score 2: ";
    if (!(cin >> score2))
    {
        cout << "Error: Enter a valid number." << endl;
        return 1;
    }

    cout << "Enter Score 3: ";
    if (!(cin >> score3))
    {
        cout << "Error: Enter a valid number." << endl;
        return 1;
    }

    // Step 2: Validate all three scores.
    if (!isValidScore(score1) ||
        !isValidScore(score2) ||
        !isValidScore(score3))
    {
        cout << "Error: All scores must be between 0 and 100."
            << endl;
        return 1;
    }

    // Step 3: Calculate the average.
    double avg = calculateAverage(score1, score2, score3);

    // Step 4: Determine the letter grade.
    char grade = getGrade(avg);

    // Step 5: Display the results.
    cout << fixed << setprecision(2);
    cout << "Average: " << avg << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
