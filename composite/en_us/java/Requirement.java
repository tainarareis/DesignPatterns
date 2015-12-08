/**
 * File: Requirement
 * Role: Component
 * Purpose: It is the abstraction for all components, including composite ones
 * declares the interface for objects in the composition.
 */
public class Requirement {

  String title;
  String content;

  public Requirement (String title, String content) {
    this.title = title;
    this.content = content;
  }

  public String showRequirement() {
    return "[Requirement]" + getTitle() + "\n" + getContent();
  }

  public void setTitle (String title){
    this.title = title;
  }

  public String getTitle() {
    return title;
  }

  public void setContent(String content) {
    this.content = content;
  }
  public String getContent() {
    return content;
  }

}
