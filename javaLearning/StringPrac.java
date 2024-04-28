class StringPrac{


    public static void main(String  args[])
    {
        String name = new String("Abhijit Barik");
        System.out.print(name.hashCode());
        System.out.println(name.charAt(0));
        System.out.print((name.concat("reddy")));
        String s1= "Piyussh";
        String s2 = "Goyel";
        System.out.println(s1 == s2);
        System.out.println(s1.contains("Pi"));
        System.out.print(s1.indexOf("P"));
        System.out.println(s2.lastIndexOf("s"));
        System.out.print(s2.equals(s1));

        //mutable string

        StringBuffer sb = new StringBuffer("Hey");
        System.out.print(sb.capacity());
        System.out.println(sb.length());
        sb.append(("Baby I love "));
        sb.deleteCharAt(2);
        sb.insert(0,"java");
      

        System.out.println(sb.length());
        System.out.println(sb.indexOf("b",14));

        System.out.print(sb.substring(3,6));
        sb.setLength(30);
        System.out.println(sb.length());
        System.out.println(sb);

        String a = sb.toString();

        System.out.println(a);


        
    }
}