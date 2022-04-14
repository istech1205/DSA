class Main {
	static int arr[]={3,2,4,5,6};
	public static void main(String args[]) {
		System.out.println("this is the sum of given array : "+sum());
	}
	static int sum() {
     int sum=0;
	 int i;

	 for (i=0;i<arr.length;i++){
     sum += arr[i];
	 }
	 return sum;
	}
}