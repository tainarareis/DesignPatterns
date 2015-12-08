/**
 * File: Feature
 * Role: Leaf
 * Purpose: Specif requirement type
 */
public class Feature extends Requirement {

  public Feature (String title, String content) {
    super(title, content);
  }

  @Override
  public String showRequirement(){
    return "[Feature]\n" + getTitle() + "\n" + getContent();
  }

}
