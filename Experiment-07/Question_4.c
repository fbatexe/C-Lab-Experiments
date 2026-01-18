// 4.Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. 
//   Write a C program to display your present address.

// 4.Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. 
//   Write a C program to display your present address.

#include <stdio.h>

union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    char zip[100];
};

union Address a = {"Arpan Pandey, Bankers Colony, Stanza Living, Lucknow, Uttar Pradesh, 228001"};

int main() {
    printf("Present address : %s", a.name);
    return 0;
}

