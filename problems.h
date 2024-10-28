template <typename T> int floorFunction(T n) {
    int intp = static_cast<int>(n);
    if (n > 0 && n != intp){    return intp - 1;}
    return intp;
}

template <typename T> int ceilingFunction(T n) {
    int intp = static_cast<int>(n);
    if (n > 0 && n != intp){    return intp + 1;}
    return intp;
}

template <typename T> void swap_values(T& a, T& b) {
    a += b;
    b = a - b;
    a -= b;
}

int multiply(int x, int y) {
    if (y == 0){    return 0;}
    if (y < 0) {    return -multiply(x, -y);}
    return x + multiply(x, y - 1);
}

int digitSum(int n) {
    if (n == 0){    return 0;}
    return (n % 10) + digitSum(n / 10);
}

int decimalToBinary(int n) {
    if (n == 0){    return 0;}
    return (n % 2) + 10 * decimalToBinary(n / 2);
}

template <typename T> T midValue(T a, T b, T c) {
    if ((a > b && a < c) || (a < b && a > c)) {
        return a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        return b;
    } else {
        return c;
    }
}
