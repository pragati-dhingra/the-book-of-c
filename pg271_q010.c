char * my_strcpy (char *dest, const char *src) {
    int i = 0;
 
    /*Loop terminates when end of src string is reached*/
    while('\0' != src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; /*Terminate dest with null byte*/
    return dest;
}
