require './requirement'

class UserStory
  include Requirement

  def format(role, goal, reason)
    @content = "As a " + role + ", I want to " + goal + " so that " + reason
  end
end
