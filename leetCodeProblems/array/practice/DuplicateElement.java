import java.util.HashSet;
import java.util.Set;

class DuplicateElement {
    public static void main(String args[]) {
       
        int[] arr = { 4, 5, 2, 4, 6, 2 };
        Set<Integer> lSet = new HashSet<>();

        for (int name : arr) {
            if (lSet.add(name) == false) {
                System.out.print("found a duplicate element in array : " + name);

            }
        }
    }
}
