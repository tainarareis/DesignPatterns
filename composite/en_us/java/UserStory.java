/**
 * File: UserStory
 * Role: Leaf
 * Purpose: Specif requirement type
 */
public class UserStory extends Requirement{

  private String role;
  private String goal;
  private String reason;

  public UserStory (String title, String content, String role, String goal, String reason) {
    super(title, content);
    this.role = role;
    this.goal = goal;
    this.reason = reason;
  }

  @Override
  public String showRequirement(){
    return "[User Story]: " + getTitle() +
            "\nAs " + getRole() +
            "\nI want to " + getGoal() +
            "\nSo that " + getReason();
  }

  public void setRole (String role){
    this.role = role ;
  }

  public String getRole() {
    return role;
  }

  public void setGoal (String goal){
    this.goal = goal;
  }

  public String getGoal() {
    return goal;
  }

  public void setReason (String reason){
    this.reason = reason ;
  }

  public String getReason() {
    return reason;
  }

}
