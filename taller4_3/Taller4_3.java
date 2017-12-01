package taller4_3;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class Taller4_3 {

    static BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int n;

        bw.write("tamaño del arreglo: ");
        bw.flush();
        n = Integer.parseInt(bf.readLine());

        int A[] = new int[n], i;

        for (i = 0; i < n; ++i) {

            bw.write("numero "+ i +": ");
            bw.flush();
            A[i] = Integer.parseInt(bf.readLine());
        }
            bw.write("lista original" + "\n" );
            bw.flush();
            A = MergeSort(A);

            for (i = 0; i < n; ++i) {

                bw.write("["+A[i] + "]");
                bw.flush();
            
        }
    }

    public static int[] MergeSort(int[] A) {

        if (A.length == 1) {
            return A;
        } else {
            int n = (int) Math.floor(A.length / 2);
            int B[] = new int[n];
            int C[] = new int[A.length - n];
            int i;
            for (i = 0; i < A.length; ++i) {
                if (i < n) {
                    B[i] = A[i];
                } else {
                    C[i - n] = A[i];
                }
            }
            B = MergeSort(B);
            C = MergeSort(C);
            A = Merge(B, C);
            return A;
        }

    }

    public static int[] Merge(int[] A, int[] B) {
        int C[] = new int[A.length + B.length];
        int i, a = 0, b = 0;
        for (i = 0; i < A.length + B.length; ++i) {
            if (a == A.length) {
                C[i] = B[b];
                ++b;
            } else if (b == B.length) {
                C[i] = A[a];
                ++a;
            } else if (A[a] > B[b]) {
                C[i] = B[b];
                ++b;
            } else {
                C[i] = A[a];
                ++a;
            }
        }
        return C;
    }
}
