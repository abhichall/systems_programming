/*
 * Programming Assignment 1: Basic C Programming (100 points)
 *
 * The goal of this assignment is to become familiar with C programming by implementing a simple
 * program that processes data from a CSV (comma-separated values) file. The program will
 * compute the mean, maximum, and minimum of a specific row or column of integers.
 *
 * Your task is to write a C program that follows these specifications:
 *
 * Input Arguments:
 * Your program must accept three command-line arguments:
 * 1. The input file (a CSV file containing integers) specified as an absolute path
 * 2. A single character indicating whether to process a column ('c') or a row ('r')
 * 3. An integer specifying the index of the row or column (0-based indexing)
 *
 * Functionality:
 * The program should read the CSV file and compute and output the mean, maximum, and
 * minimum of the specified row or column. The CSV column by row count can go up to 100 x 100.
 * The range of individual integers in the CSV files will be for 32-bit unsigned integers.
 *
 * Handling Bad Input:
 * - If the file cannot be opened, the program should print "Error opening file" and exit with status -1.
 * - If the specified row or column does not exist, the program should print the following and exit
 *   with status -1:
 *   "error in input format at line <line number>"
 * - You can assume the input CSV file is properly formatted.
 *
 * Output Format:
 * The program should print the results to stdout in the following format:
 * <filename> <"row"|"column"> <mean> <maximum> <minimum>
 * - The mean should be saved to a double value and displayed with 2 decimal places.
 */
