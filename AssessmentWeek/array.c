//this is about arrays. The first line contains an integer. If you enter 6 then 16 13 7 2 1 12


int main() {
    //    this is about arrays. The first line contains an integer. If you enter 6 then 16 13 7 2 1 12
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    //Write your code here.
    if (n == 1) {
        return a;
    } else if (n == 2) {
        return b;
    } else if (n == 3) {
        return c;
    } else {
        return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
    }
}
int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
