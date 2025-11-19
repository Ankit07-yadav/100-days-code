#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr=fopen("text.txt","r");
    
    if(ptr == NULL)  // Check if file opened
    {
        printf("Error: Could not open file!\n");
        return 1;
    }

    char str[50];
    if(fgets(str, sizeof(str), ptr) == NULL)  // Check if fgets succeeded
    {
        printf("Error: Could not read from file!\n");
        fclose(ptr);
        return 1;
    }
    
    printf("Read from file: '%s'\n", str);  // Debug: print what was read
    printf("String length: %d\n", strlen(str));  // Debug: print length

    int vowels=0, consonent=0;

    for(int i=0; str[i]!='\0'; i++)  // Fixed semicolon
    {
        printf("Character %d: '%c'\n", i, str[i]);  // Debug: print each character
        
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || 
           str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')  // Fixed double ||
        {
            vowels++;
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))  // Only letters
        {
            consonent++;
        }
    }

    printf("\nVowels = %d\n", vowels);
    printf("Consonants = %d\n", consonent);

    fclose(ptr);
    return 0;
}