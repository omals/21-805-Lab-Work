public class Area {
    static double computeArea(float radius) {
    	return (3.1428 * radius);
    }
    static float computeArea(int side) {
    	return side*side;
    }
    static float computeArea(float length , float width) {
    	return length*width ;
    }
	
    public static void main(String args[]) {
		System.out.println("\t AREA OF SHAPES\n\nShapes used in the program. ");
		System.out.print("1. Circle\n2.Square\n3.Rectangle\n");
		System.out.println("As per the per the choice.\n");
		int choice = Integer.parseInt(args[0]);
		double resultedArea;
		switch(choice) {
		case 1: {
			System.out.println("Circle : Radius - "+args[1]);
			resultedArea = computeArea(Float.parseFloat(args[1]));
			System.out.println("\t Area - "+resultedArea);
			break;}
		case 2: {
			System.out.println("Square : Side - "+args[1]);
			resultedArea = computeArea(Integer.parseInt(args[1]));
			System.out.println("\t Area - "+resultedArea);
			break;}
		case 3: {
			System.out.println("Rectangle : length - "+args[1]+"  width - "+args[2]);
			resultedArea = computeArea(Float.parseFloat(args[1]),Float.parseFloat(args[2]));
			System.out.println("\t    Area - "+resultedArea);
			break;}
		default: {
			System.out.println("The first argument does not match with the ");
			break; }
				
		}
		
	}
}
