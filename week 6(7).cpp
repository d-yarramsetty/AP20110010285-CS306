#include <stdio.h>
#include <string.h>
 
#define SIZE 100
 
char s[SIZE];
 
int i=0;
 
void S(), L(), L_();
 
int main() {
    printf("Enter a string: ");
    gets(s);
    S();
    if(i==strlen(s)) {
        printf("\nString parsed.");
    } else {
        printf("Error in parsing string.");
    }
}
 
void S() {
    if(s[i]=='(') {
        i++;
        L();
        if(s[i]==')') {
            i++;
        }
    } else if(s[i]=='a') {
        i++;
    }
}
 
void L() {
    S();
    L_();
}
 
void L_() {
    if(s[i]==',') {
        i++;
        S();
        L_();
    }
    return;
}

