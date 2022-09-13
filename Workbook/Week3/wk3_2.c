#include <stdio.h>
void findMinMax(int array[])
{
    // Maximum
    if (array[0]>=array[1] && array[1]>=array[2]){
    	printf("Max marks: %d\n\n", array[0]);}
    else if(array[1]>=array[0] && array[1]>=array[2]){
    	printf("Max marks: %d\n\n", array[1]);}
    else{
    	printf("Max marks: %d\n\n", array[2]);}
    //Minimum
    if(array[0]<=array[1] && array[1]<=array[2]){
    	printf("Min marks: %d\n", array[0]);}
    else if(array[1]<=array[0] && array[1]<=array[2]){
    	printf("Min marks: %d\n", array[1]);}
    else{
    	printf("Min marks: %d\n", array[2]);} 
}
int main() {
    int qMark[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for question %d :\n", (i + 1));
        int input;
        scanf("%d", &input);
        for(int j = 0;j< 3;j++) { 
            if(qMark[j] == input) {
                printf("Marks of questions cannot be the same.\n");
                return 1;
            } else{ qMark[i] = input; break;} 
        } 
    }
    findMinMax(qMark);
    return 0;   
}