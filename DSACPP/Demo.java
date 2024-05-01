class Demo {
    public String name="Avijit";
    public static String Company ="Nokia";

    public void fun()
    {
      System.out.print(name+ "is working at" + Company);
    }

    public static void fun1()
    {
        System.out.print(Company);
    }

    public static void staticfun(Demo obj)
    {
        System.out.print(obj.name +" working "+ Company);
    }
    public static void main(String args[])
    {
        Demo d =new Demo();
        d.name="Avijit";

        Demo d1 =new Demo();
        d1.name="Rupak";

        Demo.Company="Nokia";

        d.fun();
        d1.fun();
       

        Demo.staticfun(d);
        Demo.fun1();

    
    }
}
