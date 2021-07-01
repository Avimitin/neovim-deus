/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#666666", /* black   */
    [1] = "#ec3e45", /* red     */
    [2] = "#90c966", /* green   */
    [3] = "#edbf69", /* yellow  */
    [4] = "#73ba9f", /* blue    */
    [5] = "#c858e9", /* magenta */
    [6] = "#2bcec2", /* cyan    */
    [7] = "#ebebeb", /* white   */

    /* 8 bright colors */
    [8] = "#242a32",  /* black   */
    [9] = "#d54e53",  /* red     */
    [10] = "#98c379", /* green   */
    [11] = "#e5c07b", /* yellow  */
    [12] = "#83a598", /* blue    */
    [13] = "#c678dd", /* magenta */
    [14] = "#70c0ba", /* cyan    */
    [15] = "#eaeaea", /* white   */

    /* special colors */
    [256] = "#2c323b", /* background */
    [257] = "#eaeaea", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;

