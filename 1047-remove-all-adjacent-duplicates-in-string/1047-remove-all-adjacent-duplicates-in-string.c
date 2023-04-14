char * removeDuplicates(char * S){
        char* sb = malloc(strlen(S) + 1);
    int sbLength = 0;
    for(int i = 0; i < strlen(S); i++) {
        char character = S[i];
        if (sbLength != 0 && character == sb[sbLength - 1]) {
            sbLength--;
        } else {
            sb[sbLength] = character;
            sbLength++;
        }
    }
    sb[sbLength] = '\0';
    return sb;
}