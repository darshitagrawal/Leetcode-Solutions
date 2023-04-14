int numSteps(char * s){
        int steps = 0;
    int carry = 0;
    int i = strlen(s) - 1;

    while (i > 0) {
        if (s[i] - '0' + carry == 1) {
            steps += 2;  // add 1 and then divide by 2
            carry = 1;   // set carry to 1
        } else {
            steps += 1;  // divide by 2
        }
        i--;
    }
    
    return steps + carry;
}