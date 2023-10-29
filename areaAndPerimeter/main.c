//
//  main.c
//  areaAndPerimeter
//
//  Created by Akif Duran 
//

#include <stdio.h>

int main(void){
        
    //Defining the sides of the rectangle and getting them from the user
    
    float side1, side2;
    float area, perimeter;
    
    printf("Please enter the first and second side of the rectangle (in meter) : \n");
    scanf("%f%f", &side1, &side2);
    
    perimeter = (side1+side2) * 2;
    area = side1*side2;
    
    printf("The perimeter of the rectangle is : %f \n", perimeter);
    printf("The area of the rectangle is : %f \n", area);
    
    
    
    return 0;
}
