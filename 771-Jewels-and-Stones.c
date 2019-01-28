/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/

int numJewelsInStones(char* J, char* S) {
    
    int i = 0;
    int j = 0;
    int count = 0;
    
    while (J[i] != NULL){
        while (S[j] != NULL){
            if (S[j] == J[i]){
                count++;
            }
        j++;
        }
    j = 0;
    i++;
    }
    
    return count;
}}
