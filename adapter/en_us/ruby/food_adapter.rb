class FoodAdapter
	include Food
	
	attr_accessor :vegan_food
	
	def initialize(vegan_food)
		@vegan_food = vegan_food
		@ingredients = @vegan_food.ingredients
	end
end
