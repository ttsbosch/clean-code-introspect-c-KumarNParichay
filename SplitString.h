char** SplitString(const char* str, char delimiter) {
    int count = 0;
    const char* ptr = str;
    while (*ptr != '\0') {
        if (*ptr++ == delimiter) {
            count++;
        }
    }

    char** tokens = (char**)malloc(sizeof(char*) * (count + 2));
    int i = 0;
    ptr = str;
    char* token = (char*)malloc(strlen(str) + 1);
    int j = 0;
    while (*ptr != '\0') {
        if (*ptr == delimiter) {
            token[j] = '\0';
            tokens[i++] = strdup(token);
            j = 0;
        } else {
            token[j++] = *ptr;
        }
        ptr++;
    }
    token[j] = '\0';
    tokens[i++] = strdup(token);
    tokens[i] = NULL;
    free(token);
    return tokens;
}
