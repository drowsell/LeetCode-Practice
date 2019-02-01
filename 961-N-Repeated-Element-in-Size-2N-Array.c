/* In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.
 
 Return the element repeated N times.
 
 */

# We just need to find a repeating letter, so we can create a loop
# that returns the number in the array once it has found a duplicate.

int repeatedNTimes(int* A, int ASize) {
    
    for (int i = 0; i < ASize; i++){
        
        for (int j = i+1; j < ASize; j++){
            
            if (A[j] == A[i])
                
                return A[i];
            
        }
        
    }
    
    return 0;
    
}
