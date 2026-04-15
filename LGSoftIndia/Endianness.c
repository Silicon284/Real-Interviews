
/*Write a code to check the endianness of the system*/

#include <stdio.h>
#include <stdint.h>
int value = 0x12345678;

int *memory = NULL;
uint8_t *checkPointer = NULL;
uint8_t bytes[4];
int main(){

    printf("value = %x \n\r", value);
    memory = &value;
    printf("memory points to = 0x%x \n\r", memory);

    checkPointer = (unsigned char *)memory;
    printf("%d", sizeof(int));

    for(int i =0; i<4; i++){
        bytes[i] = *checkPointer;
        printf("checkPointer points to = 0x%p having value: %x \n\r", checkPointer, *checkPointer);
        checkPointer++;        
    }

    return 0;

}



