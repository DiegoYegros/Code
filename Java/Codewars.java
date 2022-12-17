//Consider an array/list of sheep where some sheep may be missing from their place. 
//We need a function that counts the number of sheep present in the array (true means present).
public class Codewars {
	public int countSheeps(Boolean[] arrayOfSheeps) {
		// TODO May the force be with you
		int contador = 0;
		System.out.println(contador);
		for (boolean i : arrayOfSheeps) {
			if (i)
				contador++;
		}
		return contador;
	}
}
