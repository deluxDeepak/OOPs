// Student Database with Structures

// Write a C program that creates a database of students using a struct. Each student record must contain:

//     Name: a string of at most 20 characters (no spaces; input is a single token).
//     Physics marks: an integer in [0, 100].
//     Chemistry marks: an integer in [0, 100].
//     Mathematics marks: an integer in [0, 100].

// Read the data for n students and output the list sorted by the following rules (in order of priority):

//     If a student ’A’ has higher marks in physics than a student ’B’, then A’s data is listed before B.
//     If A and B have the same physics marks and A has higher chemistry marks than B, then A is listed before B.
//     If A and B have the same marks in physics and chemistry, and A has higher marks in mathematics than B, then A is listed before B.

// You may assume each student has a distinct Mathematics mark (i.e., no ties in Maths).
// Input Format

//     First line: an integer n (1 ≤ n ≤ 100).
//     Next n lines: name physics chemistry mathematics (space-separated).

// Output Format

// Print the sorted database in n lines. Each line must be:
// name physics chemistry mathematics
// Requirements

//     Define a struct to store a student’s data.
//     Use an array (size up to 100) of these structures.
//     Implement sorting according to the rules above.

#include <stdio.h>
#include <string.h>
struct student
{
    char name[21];
    int Physics;
    int Mathematics;
    int Chemistry;
};

int compare(struct student a, struct student b)
{
    // Priority 1: Physics marks (higher first)
    if (a.Physics != b.Physics)
    {
        return b.Physics - a.Physics; // Higher physics first
    }
    // Priority 2: Chemistry marks (higher first)
    else if (a.Chemistry != b.Chemistry)
    {
        return b.Chemistry - a.Chemistry; // Higher chemistry first
    }
    // Priority 3: Mathematics marks (higher first)
    else
    {
        return b.Mathematics - a.Mathematics; // Higher math first
    }
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student student_detail[100]; // Fixed: declare with max size

    printf("Enter student details (name physics chemistry mathematics):\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", student_detail[i].name,
              &student_detail[i].Physics, // Fixed order
              &student_detail[i].Chemistry,
              &student_detail[i].Mathematics);
    }

    // Using bubble sort for sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++) // Fixed: n-i-1 for optimization
        {
            if (compare(student_detail[j], student_detail[j + 1]) > 0) // Fixed function name
            {
                struct student temp = student_detail[j];
                student_detail[j] = student_detail[j + 1];
                student_detail[j + 1] = temp;
            }
        }
    }

    // Print the sorted student details
    printf("\nSorted student database:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %d\n", student_detail[i].name,
               student_detail[i].Physics,
               student_detail[i].Chemistry,
               student_detail[i].Mathematics);
    }
    return 0;
}
