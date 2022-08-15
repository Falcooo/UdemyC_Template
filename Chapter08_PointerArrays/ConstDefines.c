#include <stdio.h>
/**
 *Define:
 *Preprocessor Comand: is called befor compiling
 *the value will be available for compiation time
 */
#define NUM_STUDENTS 10
int main()
{
    /**
     * @brief
     * used for general variables
     * value cannot be changed
     * value is available for runtime
     */

    const int graded_jan = 1;
    int students_grades[NUM_STUDENTS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    return 0;
}
