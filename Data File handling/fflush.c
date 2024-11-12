#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");  // Open a file for writing
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write some data to the file
    fprintf(file, "Hello, World!");

    // Without fflush, the data may still be in the buffer and not yet written to the file
    // So, we flush the buffer to make sure the data is written immediately
    fflush(file);
    
    printf("Data written and flushed to file.\n");
    
    // Always close the file when you're done
    fclose(file);

    return 0;
}
/*The program opens a file output.txt in write mode.
1.)It writes "Hello, World!" to the file using fprintf(). This data is stored in a buffer initially and might not be written to the file immediately.
2.)Calling fflush(file) forces the contents of the buffer to be written to output.txt right away, ensuring that the data is saved even if the buffer is not yet full.
3.)After flushing, the file is closed with fclose().
If you don’t call fflush(), the data might still be written eventually (when the buffer fills up or when you close the file), but fflush() ensures it happens at that specific moment.
*/