/**
 * File: Main
 * Role: Demonstration
 * Purpose: Demonstrates the Composite Pattern utilization.
 */
public class Main {

   public static void main(String[] args) {

      /**
       *	Creating an UserStory.
       */
    	String us01_title = "Apply Composite in Java Language";
      String us01_content = "";
    	String us01_role = " student ";
    	String us01_goal = " use a Composite example pattern in Java language ";
    	String us01_reason = " I can understand how to use the pattern ";
    	UserStory us01 = new UserStory(us01_title, us01_content, us01_role, us01_goal, us01_reason);

      /*
    	 *	Creating a Feature.
    	 */
    	String f01_title = "Structural Patterns";
    	String f01_content = "GOF structural examples";
    	Feature f01 = new Feature(f01_title, f01_content);

      /*
    	 * Creating an Epic
    	 */
    	String e01_title = "GOF Patterns";
    	String e01_description = "All GOF patterns exemplified";
    	Epic e01 = new Epic(e01_title, e01_description);

      /*
    	 * Generating the composite.
    	 * Note that the Composite handle all the leaves of requirements exactly
    	 * the same way.
    	 */
    	CompositeRequirement compositeRequirement = new CompositeRequirement();
    	compositeRequirement.addRequirement(us01);
    	compositeRequirement.addRequirement(f01);
    	compositeRequirement.addRequirement(e01);

      /*
    	 * Show the information of all requirements listed in composite.
    	 */
    	compositeRequirement.showAllRequirements();

   }

}
