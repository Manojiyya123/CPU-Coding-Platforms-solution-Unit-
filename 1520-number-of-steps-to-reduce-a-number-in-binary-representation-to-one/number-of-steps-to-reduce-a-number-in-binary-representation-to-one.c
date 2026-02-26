int numSteps(char* s) {
    int len = strlen(s);
    int st = 0;
    int c= 0;

    for (int i = len - 1; i > 0; i--) {
        if ((s[i] - '0' + c) % 2 == 1) {
            st += 2;
            c = 1;
        } 
        else st += 1;
    }
    return st+ c;
}