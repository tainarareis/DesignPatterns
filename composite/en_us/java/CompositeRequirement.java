import java.util.List;

/**
 * File: CompositeRequirement
 * Role: Composite
 * Purpose:
 */
 public class CompositeRequirement {

   private List<Requirement> requirements;

   public void addRequirement(Requirement requirement) {
     requirements.add(requirement);
   }

   public void removeRequirement(Requirement requirement) {
     requirements.remove(requirement);
   }

   public List<Requirement> getAllRequirements(){
    return requirements;
   }

   public void showAllRequirements() {

     requirements = getAllRequirements();
     for(Requirement requirement: requirements) {
       System.out.println(requirement.showRequirement());
     }

   }

 }
