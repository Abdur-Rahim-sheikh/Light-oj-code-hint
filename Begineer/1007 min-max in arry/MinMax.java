/**
 * This is the min max main class
 */
public final class MinMax {
//Declared a private constructor
    private MinMax() {
    }
        static class C {

            /**
             * THis is a minimum number
             */
           private int min_no;
            /**
             * Declared a maximum number
             **/
           private  int max_no;
        }

        static C Findminmax(final int[] arr, final int n) {
        //Created a object for the class C to call the function of max no and min no
            C c = new C();
            int i;

            if (n == 1) {
                c.max_no = arr[0];
                c.min_no = arr[0];
                return c;
            }
//Comparing the array for finding minimum
            if (arr[0] > arr[1]) {
                c.max_no= arr[0];
                c.min_no = arr[1];
            } else {
                //Finding the maximum number
                c.max_no = arr[1];
                c.min_no= arr[0];
            }

            for (i = 2; i < n; i++) {
                if (arr[i] > c.max_no) {
                    c.max_no = arr[i];
                } else if (arr[i] < c.min_no) {
                    c.min_no = arr[i];
                }
            }

            return c;
        }
    /**
     * @param args it is the main method argument
     */
        public static void main(final String[] args) {
            //Declared the array for the different numbers
           final  int[] arr = {1000, 11, 445, 1, 330, 3000};

            int s = arr.length; //Declared the length
            C c = Findminmax(arr, s); //Calling for the element
            System.out.printf("The minimum is %d", c.min_no); // Priniting the maximum element
            System.out.println();
            System.out.printf("The max is %d", c.max_no); //Printing the minimum element
        }
    }
