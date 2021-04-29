// public class Callbyvalue
// {
//     int data=10;

//     void change(int data)
//     {
//         data=data+10;

//     }
//     public static void main(String args[])
//     {
//         Callbyvalue c=new Callbyvalue();

//         c.data=c.data+10;
//         System.out.println("before change" +c.data);
//         c.change(4);
//         System.out.println("after change" +c.data);
        
//     }
// }




// public class Callbyvalue
// {
//     int id;
//     String name;

// public static void main(String args[])
// {



//     Callbyvalue c=new Callbyvalue();
//     c.id=101;
//     c.name="apoorv";
//     System.out.println(c.id);
//      System.out.println(c.name);
// }

    
// }


public class Callbyvalue{
    int age;
    String name;

    void insert(int a,String n)
    {
        age=a;
        name=n;
    }

    void display()
    {
        System.out.println(age+ " " +name);
    }

    public static void main(String args[])
    {
        Callbyvalue c=new Callbyvalue();
        c.insert(2,"Preeti");
        c.display();
    }

  
}