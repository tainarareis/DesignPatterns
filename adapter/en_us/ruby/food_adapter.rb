require './food'

class FoodAdapter
	include Food

	# Adapting!!!
	def initialize(vegan_food)
		@ingredients = vegan_food.vegan_ingredients
	end
end
