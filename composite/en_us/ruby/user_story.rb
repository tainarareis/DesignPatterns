require './requirement'

class UserStory
  include Requirement

  def format(paper, wish, finality)
    @content = "I like " + paper + " wants " + wish + " to "+ finality
  end
end
