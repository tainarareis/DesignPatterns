require './user_story'
require './epic'
require './feature'
require './composite_requirement'

dash_board = CompositeRequirement.new

# create and only set the title
user_story = UserStory.new("Apply Composite in Ruby Language", nil)
user_story.format("student", "use a Composite example pattern in Ruby Language",
	"I can understand how to use the pattern")
dash_board.add(user_story)

feature = Feature.new("Structural Patterns", "GOF Structural Examples")
dash_board.add(feature)

epic = Epic.new("GOF Patterns", "Entire GOF Patterns exemplified")
dash_board.add(epic)

dash_board.show
