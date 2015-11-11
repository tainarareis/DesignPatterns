class Menu
	attr_accessor :foods

	def initialize
		@foods = []
	end

	def show_menu
		@foods.each do |food|
			food.show_ingredients
		end
	end

	def add(food)
		@foods << food
	end
end
