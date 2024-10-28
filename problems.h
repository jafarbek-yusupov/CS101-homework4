int floorFunction(double num) {
    if (num == static_cast<int>(num)) {
        return static_cast<int>(num);
    }
    if (num > 0) {
        return static_cast<int>(num);
    }
    return static_cast<int>(num) - 1;
}

int ceilingFunction(double num) {
    if (num == static_cast<int>(num)) {
        return static_cast<int>(num);
    }
    if (num > 0) {
        return static_cast<int>(num) + 1;
    }
    return static_cast<int>(num);
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
