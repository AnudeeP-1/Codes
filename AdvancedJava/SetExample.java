package AdvancedJava;

// Java program to demonstrate a Set 

import java.util.*; 
public class SetExample{ 
	public static void main(String[] args) 
	{ 
		// Set demonstration using HashSet 
		Set<String> hash_Set 
			= new HashSet<String>(); 

		hash_Set.add("anudeep"); 
		hash_Set.add("For"); 
		hash_Set.add("Geeks"); 
		hash_Set.add("Example"); 
		hash_Set.add("Set"); 

		System.out.println(hash_Set); 
	} 
} 
