void matrix_multiplication(int *a, int *b, int *output, int i, int k, int j) {
    for (int ii = 0; ii < i; ii += 10) {
        for (int jj = 0; jj < j; jj += 10) {
            for (int kk = 0; kk < k; kk += 10) {
                // Process the tiles
                for (int x = ii; x < ii + 10 && x < i; x++) {
                    for (int y = jj; y < jj + 10 && y < j; y++) {
                        int sum = 0;
                        for (int z = kk; z < kk + 10 && z < k; z++) {
                            sum += a[x * k + z] * b[z * j + y];
                        }
                        output[x * j + y] += sum;
                    }
                }
            }
        }
    }
}
