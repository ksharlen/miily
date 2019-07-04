import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

class HashMapTest {
	public static void main(String[] args){
		HashMap<Integer, String> hashMap = new HashMap<>();
		hashMap.put(3, "king");
		hashMap.put(40, "test");
		hashMap.put(13, "hello");
		hashMap.put(1345747, "how");
		hashMap.put(4, "fish");
		// // System.out.println("get(4) = " + hashMap.get(4));
		// System.out.println("get(4) = " + hashMap.get(13));
		// System.out.println("get(4) = " + hashMap.get(3));
		Set<Map.Entry<Integer, String>> entrySet = hashMap.entrySet();
		for (Map.Entry<Integer, String> entry : entrySet)
			System.out.println(entry.getKey() + " " + entry.getValue());
	}
}