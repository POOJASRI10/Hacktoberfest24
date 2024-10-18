public class QuickSort {

    // Main function to sort an array using QuickSort
    public static void quickSort(int[] array, int low, int high) {
        if (low < high) {
            // Find pivot element such that
            // elements smaller than pivot are on the left
            // elements greater than pivot are on the right
            int pivotIndex = partition(array, low, high);

            // Recursively sort elements before
            // partition and after partition
            quickSort(array, low, pivotIndex - 1);
            quickSort(array, pivotIndex + 1, high);
        }
    }

    // This function takes the last element as pivot,
    // places the pivot element at its correct position
    // in sorted array, and places all smaller (smaller than
    // pivot) to the left of pivot and all greater elements
    // to the right of pivot
    public static int partition(int[] array, int low, int high) {
        int pivot = array[high]; // pivot
        int i = (low - 1); // index of smaller element

        for (int j = low; j < high; j++) {
            // If current element is smaller than or equal to pivot
            if (array[j] <= pivot) {
                i++;

                // swap array[i] and array[j]
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        // swap array[i + 1] and array[high] (or pivot)
        int temp = array[i + 1];
        array[i + 1] = array[high];
        array[high] = temp;

        return i + 1; // return the index of the pivot
    }

    // Utility function to print the array
    public static void printArray(int[] array) {
        for (int value : array) {
            System.out.print(value + " ");
        }
        System.out.println();
    }

    // Driver method
    public static void main(String[] args) {
        int[] array = {10, 7, 8, 9, 1, 5};
        System.out.println("Original array:");
        printArray(array);

        quickSort(array, 0, array.length - 1);

        System.out.println("Sorted array:");
        printArray(array);
    }
}
