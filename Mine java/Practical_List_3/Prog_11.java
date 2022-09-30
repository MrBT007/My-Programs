package LabProject.Practical_List_3;

import java.util.Arrays;
import java.util.Scanner;

class Prog_11 {
    public static int binarySearch(int[] arr, int n, int key) {
        int l = 0;
        int h = n - 1;
        try {
            while (l <= h) {
                int mid = (l + h) / 2;
                if (arr[mid] == key) {
                    return mid;
                } else if (arr[mid] > key) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
        } catch (ArrayIndexOutOfBoundsException ae) {
            System.out.println("Array Index is out of bound ");
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        // Array should be in sorted order
        int[] arr = {2, 7, 100, 253, 1200};
        int n = arr.length;
        System.out.println("Enter the element ");
        int element = cin.nextInt();
        int index = binarySearch(arr, 5, element);
        if (index != -1) {
            System.out.println("Element is found at " + index);
        } else {
            System.out.println("Element is not found in this array");
        }
    }
}

