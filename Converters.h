int parseIntFromString(const char* str, int* value) {
    char* endPtr;
    *value = strtol(str, &endPtr, 10);
    if (endPtr == str) {
        return 0;
    }
    return 1;
}

int parseDoubleFromString(const char* str, double* value) {
    char* endPtr;
    *value = strtod(str, &endPtr);
    if (endPtr == str) {
        return 0;
    }
    return 1;
}
