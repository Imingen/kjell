


int main(int argc, char **argv)
{
    // Load config files, if any

    // run command loop

    lsh_loop();

    // shutdon/cleanup

    return EXIT_SUCCESS;
}

void lsh_loop(void)
{
    char *line;
    char **args;
    int status;

    do{
        printf("> ");
        line = lsh_read_line();
        args = lsh_split_line(line);
        status = lsh_execute(args);

        free(line);
        free(args);
    } while (status);
}

#define LSH_RL_BUFFSIZE 1024
char *lsh_read_line(void)
{
    int buffsize = LSH_RL_BUFFSIZE;
    int position = 0;
    char *buffer = malloc(sizeof(char) * buffsize);
    int c;

    if (!buffer){
        fprintf(stderr, "lsh: allocation error\n");
        exit(EXIT_FAILUE);
    }

}




