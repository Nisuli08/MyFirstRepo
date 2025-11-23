class nisuli {
    int A = 10;
    int B = 20;

    public void printSum() {
        for (int i = 0; i < 10; i++) {
            System.out.println(A + B);
        }
    }

    public static void main(String[] args) {
        nisuli obj = new nisuli();
        obj.printSum();
    }
}
