## Lab 6

1. Create a class MxNTableThread by extending Thread class. The thread calls a non- static printTable method of another class to display multiplication table of a number supplied as parameter. Create another class TablesDemo which will instantiate two objects of the MxNTableThread class to print multiplication table of 5 and 7. Observe intermixed output from the 2 threads. Also, observe output by applying synchronization concept.


2. Write and execute a java program to create and initialize a matrix of integers. Create n threads( by implementing Runnable interface) where n is equal to the number of rows in the matrix. Each of these threads should compute a distinct row sum. The main thread computes the complete sum by looking into the partial sums given by the threads. Use join method to ensure that the main thread terminates last.


3. Write and execute a java program to implement a producer - consumer problem using Inter-thread communication.
 