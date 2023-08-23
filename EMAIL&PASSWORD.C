#include <stdio.h>
#include<string.h>

int main() {
    char email[100];
    char password[100];

    char correctEmail[] = "vananijaydip@gmail.com";
    char correctPassword[] = "jaydipvanani";

    printf(" Login \n");
	
    printf("Email : ");
    gets(email);

    printf("Password : ");
    gets(password);

  
    if (strcmp(email,correctEmail) == 0 && strcmp(password,correctPassword) == 0)
	 {
        printf("Login successful.\n");
    }
	 else 
	 {
        printf("Login failed. \n Invalid email or password.\n");
    }

    return 0;
}

