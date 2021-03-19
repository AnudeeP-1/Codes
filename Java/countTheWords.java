package Java;

import java.util.Scanner;

public class countTheWords {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(true){
            String ip = new String();
            ip = in.nextLine();
            countTheNoOfWords(ip); //prints the no of words
            maxWord(ip); // print the maximum word
            maxOccurenceOfWord(ip); // prints which letter occures many times
        }
    }
    public static void countTheNoOfWords(String ip) {
        int counter = 0;
        if(ip.isEmpty()){
            System.out.println("Enter someting");
            System.out.println("Words=" +counter);
        }
        else{
            for(int i=0;i<ip.length();i++){
                char temp = ip.charAt(i);
                if(Character.isWhitespace(temp))
                    counter++;
            }
            counter++;
            System.out.println("Words=" +counter);
        }
    }
    public static void maxWord(String ip) {
        String temp = new String();
        String max = new String();
        for(int i=0;i<ip.length();i++){
            if(ip.charAt(i)!=' ' && Character.isLetterOrDigit(ip.charAt(i)))
                temp = temp + ip.charAt(i);
            else{
                if(max.length()<temp.length())
                    max = temp;
                temp = "";
            }
        }
        if(max.length()<temp.length()){
                max = temp;
        }
        System.out.println("Max word is "+max);
    }
    public static void maxOccurenceOfWord(String ip) {
        //to find the max occurence of letter
        System.out.println("the max occurence of letter is working");
            int count=1;
            int max1=0;
            char c = ' ';
            for(int i=0;i<ip.length()-1;i++){
                for(int j=i+1;j<ip.length();j++){
                    if(ip.charAt(i)==ip.charAt(j)){
                        count++;
                        if(max1<count){
                            c=ip.charAt(i);
                            max1=count;
                        }
                    }
                }
                count=1;
            }
            System.out.println(" "+c+" occures "+max1+" times");
    }
}
