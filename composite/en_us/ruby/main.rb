require './user_story'
require './epic'
require './feature'
require './composite_requirement'

dash_board = CompositeRequirement.new

# create and only set the title
user_story = UserStory.new("Apply Composite", nil)
user_story.format('programmer', 'apply this pattern', 'work better')
dash_board.add(user_story)

epic = Epic.new("Increase quality", "Increase code quality of project")
dash_board.add(epic)

feature = Feature.new("Refactor code", 'Apply good techniques')
dash_board.add(feature)

dash_board.show
