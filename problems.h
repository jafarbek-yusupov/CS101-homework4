// Problem 1
template <typename T>
int floorFunction(T n) {
    int intp = static_cast<int>(n);
    if (n > 0 && n != intp){    return intp - 1;}
    return intp;
}

template <typename T>
int ceilingFunction(T n) {
    int intp = static_cast<int>(n);
    if (n > 0 && n != intp){    return intp + 1;}
    return intp;
}

// Problem 2
template <typename T>
void swap_values(T& a, T& b) {
    a += b;
    b = a - b;
    a -= b;
}
// Problem 3
int multiply(int x, int y) {
    if (y == 0){    return 0;}
    if (y < 0) {    return -multiply(x, -y);}
    return x + multiply(x, y - 1);
}

// Problem 4
int digitSum(int n) {
    if (n == 0){    return 0;}
    return (n % 10) + digitSum(n / 10);
}
// Problem 5
decimalToBinary
void decimalToBinary(int n) {
    if (n == 0) {    return;}
    decimalToBinary(n / 2);
    std::cout << (n % 2);
}

// Problem 6
template <typename T>
T midValue(T a, T b, T c) {
    if ((a > b && a < c) || (a < b && a > c)) {
        return a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        return b;
    } else {
        return c;
    }
}
