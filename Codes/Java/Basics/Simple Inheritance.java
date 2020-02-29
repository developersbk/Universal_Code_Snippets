Simple Inheritance
  
 

 


public class SimpleInheritance /* implicitly inherits from Object class */ {
  // available to subclass and package level clients
  protected int balance;

  public SimpleInheritance( String str ) {
    System.out.println( "SimpleInheritance says: " + str );
  }

  public void message() {

  }
}

class MySubclass extends SimpleInheritance {
  // must define constructor because parent class
  // does not define a default constructor
  public MySubclass( String str ) {
    // call the parent class's constructor
    super( str );
  }

  // i've overriden the message method declared within SimpleInheritance
  public void message() {
    // but can call it by using the super keyword
    super.message();

    // i can also access non-private implementation, best not to have any
    // in the first place, and expose through controlled accessor methods
    System.out.println( super.balance );
  }
}

class PackageLevelClient {
  public PackageLevelClient() {
    SimpleInheritance is = new MySubclass( "yo" );

    // nasty, as a class in the package i can access
    // all protected variables defined within this package,
    // even though i'm not a part of the inheritance tree
    // yuk, yuk, yuk, yuk!!!!!!!!!!
    is.balance = 45;
  }

}
