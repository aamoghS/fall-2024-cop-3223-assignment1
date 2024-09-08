//********************************************************
// fracturing.c
// Author: Aamogh Sawant | 5645542
// Date: 8/24/2024
// Class: COP 3223, Professor Parra & Benji
// Purpose: Takes in users inputs and calculates multiple features for
// a circle and to get a 100 cause it affects my grade. 
// Input: None
// Output: The respective operations based on the functions. 
//********************************************************


#include <stdio.h>
#include <math.h> // needed for pow(power) and sqrt(square root) and in assignment description 

#define PI 3.14159  // defines PI to fulfil requirement, there is a PI constant in math library

// prototypes lame ngl would rather have not makes the prototype but helps for others to read ig
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

//********************************************************
// double askForUserInput(void)
// Purpose: optional thing but takes value then returns it
// Input: None
// Output: None
// Return: A double based on user input 
//********************************************************
double askForUserInput() 
{
    double input_value;
    printf("Enter a value: ");
    scanf("%lf", &input_value); // %lf because i made the variable a double
    return input_value;
}

//********************************************************
// double calculateDistance(void)
// Purpose: Calculates and prints the distance between two points inserted 
// Input: None
// Output: Prints the distance between two points
// Return: The distance between two points  
//********************************************************

double calculateDistance()
{
    static double x1, y1, x2, y2; //declare so it doesnt change
    static double distance; // erm techincally its local
    if (distance == 0)
    {
        printf("Enter the coordinates for Point #1 (x1 x2): "); 
        x1 = askForUserInput();
        x2 = askForUserInput();

        printf("Enter the coordinates for Point #2 (y1 y2): ");
        y1 = askForUserInput();
        y2 = askForUserInput();
        
        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //cool distance function from math
        printf("The distance between the two points is %.2f\n", distance); //format print distance
        printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1); //format print
        printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2); //format print  
    }
    else 
    {
        printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1); //format print
        printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2); //format print 
    }

    return distance;
} // Distance

//********************************************************
// double calculatePerimeter(void)
// Purpose: Calculates and prints the perimeter of city 
// Input: None
// Output: Prints the perimeter of city boundary
// Return: Difficulty of creating this function
//********************************************************

double calculatePerimeter()
{
    double circumference = PI * calculateDistance(); //technically the circumference but calculates it

    printf("The perimeter of the city encompassed by your request is %.2f\n", circumference); //prints "perimeter"
    return 1.0; //i have experience with this
} // Perimeter

//********************************************************
// double calculateArea(void)
// Purpose: Calculates and prints the area of city 
// Input: None
// Output: Prints the area of the city boundary
// Return: Difficulty of creating this function
//********************************************************
double calculateArea()
{
    double area = PI * pow((calculateDistance() / 2), 2); //area of circle formula 

    printf("The area of the city encompassed by your request is %.2f\n", area); //prints area 
    return 1.0; // again i have experience 
} // Area 

//********************************************************
// double calculateWidth(void)
// Purpose: Calculates and prints the width of city 
// Input: None
// Output: Prints the width of the city boundary
// Return: Difficulty of creating this function 
//********************************************************

double calculateWidth()
{
    printf("The width of the city encompassed by your request is %.2f\n", calculateDistance()); //print width via local call
    return 1.5; //had to use google to find the width | bruh moment when i read the discussion post 
} // Width

//********************************************************
// double calculate_height(void)
// Purpose: Calculates and prints height of city 
// Input: None
// Output: Prints the height of the city boundary
// Return: Difficulty of creating this function 
//********************************************************

double calculateHeight()
{
    printf("The height of the city encompassed by your request is %.2f\n", calculateDistance()); //print height via local call
    return 1.5; //bruh moment when i read the discussion post also
} // Height

//********************************************************
// int main(int argc, char **argv)
// Purpose: The main function, calls the functions which have their respective features for inserting data and printing it
// Input: None
// Output: None, the other functions do the job
// Return: 0 to end program
//********************************************************

int main(int argc, char **argv)
{
    calculateDistance();// calling the functions to follow rules
    calculatePerimeter(); 
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
} // main cool
