// AW p7 arrays and loops

int main(){
    // Example 1
    int grades [] = {78,18,99,87,94,86,88,90};
    printf("%d\n", grades[1]);
    grades[1] = 70;
    printf("%d\n", grades[1]);

    // Example 2
    float measurements [10];
    measurements [0] = 5.25;
    measurements [1] = 0.35;
    measurements [2] = 1.99;
    measurements [3] = 3.48;

    printf("%.2f %.2f %.2f %.2f %.2f \n", measurements [0], measurements [1], measurments [2], measurements [3])

    //Example 3
    char names[] [20] = {"alex", "Katie", "andrew", "vienna", "tia", "treyson"};

    printf("%s\n", names [6]);

    return 0;
}