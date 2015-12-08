/**
 * File: Epic
 * Role: Leaf
 * Purpose: Specif requirement type
 */
public class Epic extends Requirement{

  public Epic (String title, String content) {
    super(title, content);
  }

  @Override
  public String showRequirement(){
    return "[Epic]\n" + getTitle() + "\n" + getContent();
  }

}
